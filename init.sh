#!/bin/bash


PATH=/bin:/usr/bin:/sbin:/usr/sbin:/usr/local/bin:/usr/local/sbin
export PATH


BASE=$(cd `dirname $0`;pwd) 
#echo $BASE


function init_yum() 
{
        yum clean all \
        && wget -O - http://xnet.yum.sandai.net/yum.sh | sh \
        && yum makecache \
        && yum -y install pciutils \
        && yum -y install libudev-devel \
        && yum -y install boost-devel \
        && yum -y install kernel-devel-$(uname -r) \
        && yum -y install gcc \
        && yum -y install zlib-devel \
        && yum -y install openssl-devel 
}



function wget_app()
{
        mkdir $BASE/qat1.7
        echo $BASE/qat1.7
        wget -c https://01.org/sites/default/files/downloads/intelr-quickassist-technology/qat1.7.upstream.l.1.0.3-42.tar.gz -O - |tar -zx -C $BASE/qat1.7 \
        && wget -c https://www.openssl.org/source/openssl-1.1.0f.tar.gz -O - |tar -zx \
        &&  wget -c https://github.com/intel/QAT_Engine/archive/v0.5.32.tar.gz -O - |tar -zx 
}


function install_QAT_Driver()
{
        cd $BASE/qat1.7 \
        && 
        /usr/bin/expect <<-EOF
        set timeout 180;
        spawn  bash /root/apps/qat1.7/installer.sh
        expect {
                "\t 0  Exit" {send "2\n";exp_continue}
                "*qat1.7]" {send "\n";exp_continue}
                "qat1.7/build]" {send "\n";exp_continue}
                "*build/]" {send "\n";exp_continue}
                "*No error detected in InstallerLog.txt file*" { send "0\n" }

        }
        expect "*#"
        EOF
        if lsmod |grep qat_dh895xcc;then
            echo "QAT_Driver install success!!"
        else
            echo "QAT_Driver not install!"

        fi
}


function install_openssl()
{
        cd $BASE \
        && wget -c https://www.openssl.org/source/old/1.1.0/openssl-1.1.0f.tar.gz -O - |tar -zx \
        && cd openssl-1.1.0f \
        && ./config --prefix=/usr/local/ssl -Wl,-rpath,/usr/local/ssl/lib \
        && make depend \
        && make -j8 \
        && make install 

}


function install_QAT_Engine()
{
        cd $BASE \
        && tar zxvf v0.5.32.tar.gz \
        && cd QAT_Engine-0.5.32 \
        && ./configure --with-qat_dir=$BASE/qat1.7 --with-openssl_dir=$BASE/openssl-1.1.0f --with-openssl_install_dir=/usr/local/ssl --enable-upstream_driver --enable-usdm \
        && make && make install 

}


function modify_openssl_config()
{
        cp /usr/local/ssl/ssl/openssl.cnf /usr/local/ssl/ssl/openssl.cnf.bak \
        && cat > /usr/local/ssl/ssl/openssl.cnf <<EOF
# OpenSSL example configuration file.
# This is mostly being used for generation of certificate requests.
#
openssl_conf = openssl_def
[openssl_def]
engines = engine_section
[engine_section]
qat = qat_section
[qat_section]
engine_id = qat
dynamic_path = /usr/local/ssl/lib/libqat.so
default_algorithms = RSA
EOF

}


function restart_qat_service()
{
        cp /etc/dh895xcc_dev0.conf /etc/dh895xcc_dev0.conf.bak \
        && cp /etc/dh895xcc_dev1.conf  /etc/dh895xcc_dev1.conf.bak \
        && cp -f $BASE/QAT_Engine-0.5.32/qat/config/dh895xcc/multi_process_optimized/dh895xcc_dev0.conf /etc/dh895xcc_qa_dev0.conf \
        && cp -f $BASE/QAT_Engine-0.5.32/qat/config/dh895xcc/multi_process_optimized/dh895xcc_dev0.conf /etc/dh895xcc_qa_dev1.conf \
        && service qat_service restart
}


function test_QAT_speed()
{
        /usr/local/ssl/bin/openssl speed -engine qat -elapsed -multi 128 -async_jobs 36 rsa2048

}

#init_yum
#install_QAT_Driver
#install_openssl
#install_QAT_Engine
#modify_openssl_config
#restart_qat_service
test_QAT_speed
