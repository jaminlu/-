#define NGX_CONFIGURE " --prefix=/usr/local/nginx --sbin-path=/usr/local/nginx/sbin/nginx --conf-path=/usr/local/nginx/conf/nginx.conf --error-log-path=/usr/local/nginx/logs/error.log --http-log-path=/usr/local/nginx/logs/access.log --http-client-body-temp-path=/usr/local/nginx/tmp/client_body --http-proxy-temp-path=/usr/local/nginx/tmp/proxy --http-fastcgi-temp-path=/usr/local/nginx/tmp/fastcgi --http-uwsgi-temp-path=/usr/local/nginx/tmp/uwsgi --http-scgi-temp-path=/usr/local/nginx/tmp/scgi --pid-path=/var/run/nginx.pid --lock-path=/var/lock/subsys/nginx --user=nobody --group=nobody --with-poll_module --with-file-aio --with-http_ssl_module --with-http_v2_module --with-http_realip_module --with-pcre --with-pcre-jit --with-stream --with-stream_ssl_module --with-stream_realip_module --with-stream_ssl_preread_module --with-http_gzip_static_module --with-http_gunzip_module --with-http_secure_link_module --with-http_image_filter_module --with-http_sub_module --with-http_dav_module --with-http_flv_module --with-http_mp4_module --with-http_random_index_module --with-http_degradation_module --with-http_stub_status_module --with-http_xslt_module --with-http_slice_module --with-mail --with-mail_ssl_module --with-openssl=/root/rpmbuild/openssl-1.1.0f --with-cc-opt='-DNGX_SECURE_MEM -I/usr/local/ssl/include -Wno-error=deprecated-declarations' --with-ld-opt='-Wl,-rpath=/usr/local/ssl/lib -L/usr/local/ssl/lib' --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/lua-upstream-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-eval-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/form-input-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/iconv-nginx-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-auth-digest --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-concat --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/ngx_cache_purge --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upload-module --add-dynamic-module=/root/rpmbuild/BUILD/nginx-1.14.0/asynch_mode_nginx/modules/nginx_qat_module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module --add-module=/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module"

#ifndef NGX_COMPILER
#define NGX_COMPILER  "gcc 4.8.5 20150623 (Red Hat 4.8.5-28) (GCC) "
#endif


#ifndef NGX_HAVE_GCC_ATOMIC
#define NGX_HAVE_GCC_ATOMIC  1
#endif


#ifndef NGX_HAVE_C99_VARIADIC_MACROS
#define NGX_HAVE_C99_VARIADIC_MACROS  1
#endif


#ifndef NGX_HAVE_GCC_VARIADIC_MACROS
#define NGX_HAVE_GCC_VARIADIC_MACROS  1
#endif


#ifndef NGX_HAVE_GCC_BSWAP64
#define NGX_HAVE_GCC_BSWAP64  1
#endif


#ifndef NGX_HAVE_EPOLL
#define NGX_HAVE_EPOLL  1
#endif


#ifndef NGX_HAVE_CLEAR_EVENT
#define NGX_HAVE_CLEAR_EVENT  1
#endif


#ifndef NGX_HAVE_EPOLLRDHUP
#define NGX_HAVE_EPOLLRDHUP  1
#endif


#ifndef NGX_HAVE_O_PATH
#define NGX_HAVE_O_PATH  1
#endif


#ifndef NGX_HAVE_SENDFILE
#define NGX_HAVE_SENDFILE  1
#endif


#ifndef NGX_HAVE_SENDFILE64
#define NGX_HAVE_SENDFILE64  1
#endif


#ifndef NGX_HAVE_PR_SET_DUMPABLE
#define NGX_HAVE_PR_SET_DUMPABLE  1
#endif


#ifndef NGX_HAVE_PR_SET_KEEPCAPS
#define NGX_HAVE_PR_SET_KEEPCAPS  1
#endif


#ifndef NGX_HAVE_CAPABILITIES
#define NGX_HAVE_CAPABILITIES  1
#endif


#ifndef NGX_HAVE_GNU_CRYPT_R
#define NGX_HAVE_GNU_CRYPT_R  1
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  64
#endif


#define NGX_KQUEUE_UDATA_T  (void *)


#ifndef NGX_HAVE_POSIX_FADVISE
#define NGX_HAVE_POSIX_FADVISE  1
#endif


#ifndef NGX_HAVE_O_DIRECT
#define NGX_HAVE_O_DIRECT  1
#endif


#ifndef NGX_HAVE_ALIGNED_DIRECTIO
#define NGX_HAVE_ALIGNED_DIRECTIO  1
#endif


#ifndef NGX_HAVE_STATFS
#define NGX_HAVE_STATFS  1
#endif


#ifndef NGX_HAVE_STATVFS
#define NGX_HAVE_STATVFS  1
#endif


#ifndef NGX_HAVE_DLOPEN
#define NGX_HAVE_DLOPEN  1
#endif


#ifndef NGX_HAVE_SCHED_YIELD
#define NGX_HAVE_SCHED_YIELD  1
#endif


#ifndef NGX_HAVE_SCHED_SETAFFINITY
#define NGX_HAVE_SCHED_SETAFFINITY  1
#endif


#ifndef NGX_HAVE_REUSEPORT
#define NGX_HAVE_REUSEPORT  1
#endif


#ifndef NGX_HAVE_TRANSPARENT_PROXY
#define NGX_HAVE_TRANSPARENT_PROXY  1
#endif


#ifndef NGX_HAVE_IP_PKTINFO
#define NGX_HAVE_IP_PKTINFO  1
#endif


#ifndef NGX_HAVE_IPV6_RECVPKTINFO
#define NGX_HAVE_IPV6_RECVPKTINFO  1
#endif


#ifndef NGX_HAVE_DEFERRED_ACCEPT
#define NGX_HAVE_DEFERRED_ACCEPT  1
#endif


#ifndef NGX_HAVE_KEEPALIVE_TUNABLE
#define NGX_HAVE_KEEPALIVE_TUNABLE  1
#endif


#ifndef NGX_HAVE_TCP_FASTOPEN
#define NGX_HAVE_TCP_FASTOPEN  1
#endif


#ifndef NGX_HAVE_TCP_INFO
#define NGX_HAVE_TCP_INFO  1
#endif


#ifndef NGX_HAVE_ACCEPT4
#define NGX_HAVE_ACCEPT4  1
#endif


#ifndef NGX_HAVE_FILE_AIO
#define NGX_HAVE_FILE_AIO  1
#endif


#ifndef NGX_HAVE_EVENTFD
#define NGX_HAVE_EVENTFD  1
#endif


#ifndef NGX_HAVE_SYS_EVENTFD_H
#define NGX_HAVE_SYS_EVENTFD_H  1
#endif


#ifndef NGX_HAVE_UNIX_DOMAIN
#define NGX_HAVE_UNIX_DOMAIN  1
#endif


#ifndef NGX_PTR_SIZE
#define NGX_PTR_SIZE  8
#endif


#ifndef NGX_SIG_ATOMIC_T_SIZE
#define NGX_SIG_ATOMIC_T_SIZE  4
#endif


#ifndef NGX_HAVE_LITTLE_ENDIAN
#define NGX_HAVE_LITTLE_ENDIAN  1
#endif


#ifndef NGX_MAX_SIZE_T_VALUE
#define NGX_MAX_SIZE_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_SIZE_T_LEN
#define NGX_SIZE_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_MAX_OFF_T_VALUE
#define NGX_MAX_OFF_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_OFF_T_LEN
#define NGX_OFF_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_TIME_T_SIZE
#define NGX_TIME_T_SIZE  8
#endif


#ifndef NGX_TIME_T_LEN
#define NGX_TIME_T_LEN  (sizeof("-9223372036854775808") - 1)
#endif


#ifndef NGX_MAX_TIME_T_VALUE
#define NGX_MAX_TIME_T_VALUE  9223372036854775807LL
#endif


#ifndef NGX_HAVE_INET6
#define NGX_HAVE_INET6  1
#endif


#ifndef NGX_HAVE_PREAD
#define NGX_HAVE_PREAD  1
#endif


#ifndef NGX_HAVE_PWRITE
#define NGX_HAVE_PWRITE  1
#endif


#ifndef NGX_HAVE_PWRITEV
#define NGX_HAVE_PWRITEV  1
#endif


#ifndef NGX_SYS_NERR
#define NGX_SYS_NERR  135
#endif


#ifndef NGX_HAVE_LOCALTIME_R
#define NGX_HAVE_LOCALTIME_R  1
#endif


#ifndef NGX_HAVE_CLOCK_MONOTONIC
#define NGX_HAVE_CLOCK_MONOTONIC  1
#endif


#ifndef NGX_HAVE_POSIX_MEMALIGN
#define NGX_HAVE_POSIX_MEMALIGN  1
#endif


#ifndef NGX_HAVE_MEMALIGN
#define NGX_HAVE_MEMALIGN  1
#endif


#ifndef NGX_HAVE_MAP_ANON
#define NGX_HAVE_MAP_ANON  1
#endif


#ifndef NGX_HAVE_MAP_DEVZERO
#define NGX_HAVE_MAP_DEVZERO  1
#endif


#ifndef NGX_HAVE_SYSVSHM
#define NGX_HAVE_SYSVSHM  1
#endif


#ifndef NGX_HAVE_POSIX_SEM
#define NGX_HAVE_POSIX_SEM  1
#endif


#ifndef NGX_HAVE_MSGHDR_MSG_CONTROL
#define NGX_HAVE_MSGHDR_MSG_CONTROL  1
#endif


#ifndef NGX_HAVE_FIONBIO
#define NGX_HAVE_FIONBIO  1
#endif


#ifndef NGX_HAVE_GMTOFF
#define NGX_HAVE_GMTOFF  1
#endif


#ifndef NGX_HAVE_D_TYPE
#define NGX_HAVE_D_TYPE  1
#endif


#ifndef NGX_HAVE_SC_NPROCESSORS_ONLN
#define NGX_HAVE_SC_NPROCESSORS_ONLN  1
#endif


#ifndef NGX_HAVE_LEVEL1_DCACHE_LINESIZE
#define NGX_HAVE_LEVEL1_DCACHE_LINESIZE  1
#endif


#ifndef NGX_HAVE_OPENAT
#define NGX_HAVE_OPENAT  1
#endif


#ifndef NGX_HAVE_GETADDRINFO
#define NGX_HAVE_GETADDRINFO  1
#endif


#ifndef NGX_HAVE_POLL
#define NGX_HAVE_POLL  1
#endif


#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_V2
#define NGX_HTTP_V2  1
#endif


#ifndef NGX_HTTP_HEADERS
#define NGX_HTTP_HEADERS  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_DAV
#define NGX_HTTP_DAV  1
#endif


#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#endif


#ifndef NGX_HTTP_REALIP
#define NGX_HTTP_REALIP  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_SSL
#define NGX_HTTP_SSL  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_DEGRADATION
#define NGX_HTTP_DEGRADATION  1
#endif


#ifndef NGX_HTTP_UPSTREAM_ZONE
#define NGX_HTTP_UPSTREAM_ZONE  1
#endif


#ifndef NGX_STAT_STUB
#define NGX_STAT_STUB  1
#endif


#ifndef NGX_MAIL_SSL
#define NGX_MAIL_SSL  1
#endif


#ifndef NGX_STREAM_SSL
#define NGX_STREAM_SSL  1
#endif


#ifndef NGX_STREAM_UPSTREAM_ZONE
#define NGX_STREAM_UPSTREAM_ZONE  1
#endif


#ifndef NDK
#define NDK  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_SO_PASSCRED
#define NGX_HTTP_LUA_HAVE_SO_PASSCRED  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_CONSTRUCTOR
#define NGX_HTTP_LUA_HAVE_CONSTRUCTOR  1
#endif


#ifndef NGX_HTTP_LUA_HAVE_MALLOC_TRIM
#define NGX_HTTP_LUA_HAVE_MALLOC_TRIM  1
#endif


#ifndef NGX_STREAM_LUA_HAVE_SO_PASSCRED
#define NGX_STREAM_LUA_HAVE_SO_PASSCRED  1
#endif


#ifndef NGX_STAT_STUB
#define NGX_STAT_STUB  1
#endif


#ifndef NGX_STAT_STUB
#define NGX_STAT_STUB  1
#endif


#ifndef NGX_HAVE_SYSINFO
#define NGX_HAVE_SYSINFO  1
#endif


#ifndef NGX_HAVE_GETLOADAVG
#define NGX_HAVE_GETLOADAVG  1
#endif


#ifndef NGX_HAVE_PROC_MEMINFO
#define NGX_HAVE_PROC_MEMINFO  1
#endif


#ifndef NGX_HTTP_PROXY
#define NGX_HTTP_PROXY  1
#endif


#ifndef NGX_HTTP_FASTCGI
#define NGX_HTTP_FASTCGI  1
#endif


#ifndef NGX_HTTP_SCGI
#define NGX_HTTP_SCGI  1
#endif


#ifndef NGX_HTTP_UWSGI
#define NGX_HTTP_UWSGI  1
#endif


#ifndef NGX_CACHE_PURGE_MODULE
#define NGX_CACHE_PURGE_MODULE  1
#endif


#ifndef NGX_COOLKIT_MODULE
#define NGX_COOLKIT_MODULE  1
#endif


#ifndef NGX_HTTP_HEADERS
#define NGX_HTTP_HEADERS  1
#endif


#ifndef NGX_HAVE_SHA1
#define NGX_HAVE_SHA1  1
#endif


#ifndef NGX_STREAM_UPSYNC
#define NGX_STREAM_UPSYNC  1
#endif


#ifndef NGX_HTTP_UPSYNC
#define NGX_HTTP_UPSYNC  1
#endif


#ifndef NGX_PCRE
#define NGX_PCRE  1
#endif


#ifndef NGX_HAVE_PCRE_JIT
#define NGX_HAVE_PCRE_JIT  1
#endif


#ifndef NGX_OPENSSL
#define NGX_OPENSSL  1
#endif


#ifndef NGX_SSL
#define NGX_SSL  1
#endif


#ifndef NGX_ZLIB
#define NGX_ZLIB  1
#endif


#ifndef NGX_HAVE_EXSLT
#define NGX_HAVE_EXSLT  1
#endif


#ifndef NGX_PREFIX
#define NGX_PREFIX  "/usr/local/nginx/"
#endif


#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "/usr/local/nginx/conf/"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  "/usr/local/nginx/sbin/nginx"
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "/usr/local/nginx/conf/nginx.conf"
#endif


#ifndef NGX_PID_PATH
#define NGX_PID_PATH  "/var/run/nginx.pid"
#endif


#ifndef NGX_LOCK_PATH
#define NGX_LOCK_PATH  "/var/lock/subsys/nginx"
#endif


#ifndef NGX_ERROR_LOG_PATH
#define NGX_ERROR_LOG_PATH  "/usr/local/nginx/logs/error.log"
#endif


#ifndef NGX_HTTP_LOG_PATH
#define NGX_HTTP_LOG_PATH  "/usr/local/nginx/logs/access.log"
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
#define NGX_HTTP_CLIENT_TEMP_PATH  "/usr/local/nginx/tmp/client_body"
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
#define NGX_HTTP_PROXY_TEMP_PATH  "/usr/local/nginx/tmp/proxy"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
#define NGX_HTTP_FASTCGI_TEMP_PATH  "/usr/local/nginx/tmp/fastcgi"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
#define NGX_HTTP_UWSGI_TEMP_PATH  "/usr/local/nginx/tmp/uwsgi"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
#define NGX_HTTP_SCGI_TEMP_PATH  "/usr/local/nginx/tmp/scgi"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  "nobody"
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  "nobody"
#endif

