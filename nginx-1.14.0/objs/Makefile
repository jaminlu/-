
CC =	cc
CFLAGS =    -pipe  -O -W -Wall -Wpointer-arith -Wno-unused-parameter -Werror -g -DNGX_SECURE_MEM -I/usr/local/ssl/include -Wno-error=deprecated-declarations -DNDK_SET_VAR -DNDK_SET_VAR -DNDK_SET_VAR -DNDK_SET_VAR -DNDK_SET_VAR -DNDK_UPSTREAM_LIST -DNDK_SET_VAR -DNDK_SET_VAR
CPP =	cc -E
LINK =	$(CC)


ALL_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/unix \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/api \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/api \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/include \
	-I /root/rpmbuild/openssl-1.1.0f/.openssl/include \
	-I /usr/include/libxml2 \
	-I objs \
	-I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../nxt \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../njs \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src \
	-I src/mail \
	-I src/stream \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../nxt \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../njs \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src


CORE_DEPS = src/core/nginx.h \
	src/core/ngx_config.h \
	src/core/ngx_core.h \
	src/core/ngx_log.h \
	src/core/ngx_palloc.h \
	src/core/ngx_array.h \
	src/core/ngx_list.h \
	src/core/ngx_hash.h \
	src/core/ngx_buf.h \
	src/core/ngx_queue.h \
	src/core/ngx_string.h \
	src/core/ngx_parse.h \
	src/core/ngx_parse_time.h \
	src/core/ngx_inet.h \
	src/core/ngx_file.h \
	src/core/ngx_crc.h \
	src/core/ngx_crc32.h \
	src/core/ngx_murmurhash.h \
	src/core/ngx_md5.h \
	src/core/ngx_sha1.h \
	src/core/ngx_rbtree.h \
	src/core/ngx_radix_tree.h \
	src/core/ngx_rwlock.h \
	src/core/ngx_slab.h \
	src/core/ngx_times.h \
	src/core/ngx_shmtx.h \
	src/core/ngx_connection.h \
	src/core/ngx_cycle.h \
	src/core/ngx_conf_file.h \
	src/core/ngx_module.h \
	src/core/ngx_resolver.h \
	src/core/ngx_open_file_cache.h \
	src/core/ngx_crypt.h \
	src/core/ngx_proxy_protocol.h \
	src/core/ngx_syslog.h \
	src/event/ngx_event.h \
	src/event/ngx_event_timer.h \
	src/event/ngx_event_posted.h \
	src/event/ngx_event_connect.h \
	src/event/ngx_event_pipe.h \
	src/os/unix/ngx_time.h \
	src/os/unix/ngx_errno.h \
	src/os/unix/ngx_alloc.h \
	src/os/unix/ngx_files.h \
	src/os/unix/ngx_channel.h \
	src/os/unix/ngx_shmem.h \
	src/os/unix/ngx_process.h \
	src/os/unix/ngx_setaffinity.h \
	src/os/unix/ngx_setproctitle.h \
	src/os/unix/ngx_atomic.h \
	src/os/unix/ngx_gcc_atomic_x86.h \
	src/os/unix/ngx_thread.h \
	src/os/unix/ngx_socket.h \
	src/os/unix/ngx_os.h \
	src/os/unix/ngx_user.h \
	src/os/unix/ngx_dlopen.h \
	src/os/unix/ngx_process_cycle.h \
	src/os/unix/ngx_linux_config.h \
	src/os/unix/ngx_linux.h \
	src/event/ngx_event_openssl.h \
	src/core/ngx_regex.h \
	/root/rpmbuild/openssl-1.1.0f/.openssl/include/openssl/ssl.h \
	objs/ngx_auto_config.h


CORE_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/unix \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/api \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/api \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/include \
	-I /root/rpmbuild/openssl-1.1.0f/.openssl/include \
	-I /usr/include/libxml2 \
	-I objs


HTTP_DEPS = src/http/ngx_http.h \
	src/http/ngx_http_request.h \
	src/http/ngx_http_config.h \
	src/http/ngx_http_core_module.h \
	src/http/ngx_http_cache.h \
	src/http/ngx_http_variables.h \
	src/http/ngx_http_script.h \
	src/http/ngx_http_upstream.h \
	src/http/ngx_http_upstream_round_robin.h \
	src/http/modules/ngx_http_ssi_filter_module.h \
	src/http/v2/ngx_http_v2.h \
	src/http/v2/ngx_http_v2_module.h \
	src/http/modules/ngx_http_ssl_module.h


HTTP_INCS = -I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/objs \
	-I objs/addon/ndk \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../nxt \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../njs \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src


MAIL_DEPS = src/mail/ngx_mail.h \
	src/mail/ngx_mail_ssl_module.h \
	src/mail/ngx_mail_pop3_module.h \
	src/mail/ngx_mail_imap_module.h \
	src/mail/ngx_mail_smtp_module.h


MAIL_INCS = -I src/mail


STREAM_DEPS = src/stream/ngx_stream.h \
	src/stream/ngx_stream_variables.h \
	src/stream/ngx_stream_script.h \
	src/stream/ngx_stream_upstream.h \
	src/stream/ngx_stream_upstream_round_robin.h \
	src/stream/ngx_stream_ssl_module.h


STREAM_INCS = -I src/stream \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../nxt \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../njs \
	-I /root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src


ADDON_DEPS = $(CORE_DEPS)  /root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src/ndk.h                                                                            /root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ngx_http_array_var_util.h                                                                                                          /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_module.h                                   /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_handler.h                                  /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_util.h                                     /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_sleep.h                                    /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_filter.h                                   /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_var.h                                      /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_location.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_echo.h                                     /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_request_info.h                             /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_subrequest.h                               /root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_foreach.h                                                                                                      /root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ngx_http_encrypted_session_cipher.h                                                                                                /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.h                    /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.h                       /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.h                      /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.h                       /root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_util.h                                           /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ddebug.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_script.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_subrequest.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ndk.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_control.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_time.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_string.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_misc.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_variable.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_output.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uri.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_body.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_args.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ctx.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_regex.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_common.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_directive.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_out.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_in.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_consts.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_exception.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_util.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_cache.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_contentby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_rewriteby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_accessby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_setby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_capturefilter.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_clfactory.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_pcrefix.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headerfilterby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_shdict.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_tcp.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/api/ngx_http_lua_api.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_logby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_sleep.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_semaphore.h            /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_coroutine.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_bodyfilterby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initworkerby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_udp.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_method.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_phase.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_probe.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uthread.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_timer.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_config.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_worker.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_certby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_lex.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_balancer.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl.h             /root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log_ringbuf.h                                                                                       /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_module.h                                   /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_request.h                                  /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_response.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_util.h                                     /root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_handler.h                                   /root/rpmbuild/BUILD/nginx-1.14.0/nginx-eval-module/src/ddebug.h                                                                            /root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_module.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_handler.h                                /root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_reply.h                                  /root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_util.h                                                                                                             /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_default_value.h                             /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.h                           /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_sql.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_json.h                                /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_unescape_uri.h                              /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_escape_uri.h                                /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hash.h                                      /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_local_today.h                               /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hex.h                                       /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_base64.h                                    /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_random.h                                    /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_rotate.h                                    /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_secure_random.h                             /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_misc_module.h                                /root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hmac.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ddebug.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/api/ngx_stream_lua_api.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_request.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_common.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_lex.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_contentby.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_util.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_cache.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_clfactory.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_pcrefix.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_uthread.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_coroutine.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_output.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_consts.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_log.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_time.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_string.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_control.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_sleep.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_phase.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ctx.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_regex.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_script.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_shdict.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_variable.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_timer.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_config.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/api/ngx_stream_lua_api.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_worker.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_misc.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initby.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initworkerby.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_tcp.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_udp.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_args.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ssl.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_balancer.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_logby.h                 /root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_prereadby.h                                                                                            /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ddebug.h                                                 /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_filter_module.h                         /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_util.h                                  /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_var.h                                   /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_fetch.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_store.h                                 /root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_headers.h                                /root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ddebug.h /root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_filter_module.h /root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_util.h                   /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_module.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_string.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_shm.h                          /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_node.h                         /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_filter.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_control.h                      /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_display.h                      /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_module_html.h                                     /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_module.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_variables.h                    /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_string.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_shm.h                          /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_node.h                         /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_filter.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_control.h                      /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_limit.h                        /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_display.h                      /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_set.h                          /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_dump.h                         /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_module_html.h                                     /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_module.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_string.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_shm.h                          /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_node.h                         /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_filter.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_limit.h                        /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_variables.h                                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_module.h                       /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_sysinfo.h                      /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_node.h                         /root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_variables.h                     /root/rpmbuild/BUILD/nginx-1.14.0/form-input-nginx-module/src/ddebug.h /root/rpmbuild/BUILD/nginx-1.14.0/iconv-nginx-module/src/ddebug.h /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../build/libnjs.a /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../build/libnjs.a /root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_handlers.h /root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_module.h /root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_variables.h $(HTTP_DEPS) $(MAIL_DEPS) $(STREAM_DEPS)


build:	binary modules manpage

binary:	objs/nginx

objs/nginx:	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/os/unix/ngx_linux_aio_read.o \
	objs/src/event/modules/ngx_poll_module.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_xslt_filter_module.o \
	objs/src/http/modules/ngx_http_image_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_huff_decode.o \
	objs/src/http/v2/ngx_http_v2_huff_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_random_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_secure_link_module.o \
	objs/src/http/modules/ngx_http_degradation_module.o \
	objs/src/http/modules/ngx_http_flv_module.o \
	objs/src/http/modules/ngx_http_mp4_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/src/mail/ngx_mail.o \
	objs/src/mail/ngx_mail_core_module.o \
	objs/src/mail/ngx_mail_handler.o \
	objs/src/mail/ngx_mail_parse.o \
	objs/src/mail/ngx_mail_ssl_module.o \
	objs/src/mail/ngx_mail_pop3_module.o \
	objs/src/mail/ngx_mail_pop3_handler.o \
	objs/src/mail/ngx_mail_imap_module.o \
	objs/src/mail/ngx_mail_imap_handler.o \
	objs/src/mail/ngx_mail_smtp_module.o \
	objs/src/mail/ngx_mail_smtp_handler.o \
	objs/src/mail/ngx_mail_auth_http_module.o \
	objs/src/mail/ngx_mail_proxy_module.o \
	objs/src/stream/ngx_stream.o \
	objs/src/stream/ngx_stream_variables.o \
	objs/src/stream/ngx_stream_script.o \
	objs/src/stream/ngx_stream_handler.o \
	objs/src/stream/ngx_stream_core_module.o \
	objs/src/stream/ngx_stream_log_module.o \
	objs/src/stream/ngx_stream_proxy_module.o \
	objs/src/stream/ngx_stream_upstream.o \
	objs/src/stream/ngx_stream_upstream_round_robin.o \
	objs/src/stream/ngx_stream_write_filter_module.o \
	objs/src/stream/ngx_stream_ssl_module.o \
	objs/src/stream/ngx_stream_realip_module.o \
	objs/src/stream/ngx_stream_limit_conn_module.o \
	objs/src/stream/ngx_stream_access_module.o \
	objs/src/stream/ngx_stream_geo_module.o \
	objs/src/stream/ngx_stream_map_module.o \
	objs/src/stream/ngx_stream_split_clients_module.o \
	objs/src/stream/ngx_stream_return_module.o \
	objs/src/stream/ngx_stream_upstream_hash_module.o \
	objs/src/stream/ngx_stream_upstream_least_conn_module.o \
	objs/src/stream/ngx_stream_upstream_zone_module.o \
	objs/src/stream/ngx_stream_ssl_preread_module.o \
	objs/addon/src/ndk.o \
	objs/addon/src/ngx_http_array_var_module.o \
	objs/addon/src/ngx_http_array_var_util.o \
	objs/addon/src/ngx_http_echo_module.o \
	objs/addon/src/ngx_http_echo_util.o \
	objs/addon/src/ngx_http_echo_timer.o \
	objs/addon/src/ngx_http_echo_var.o \
	objs/addon/src/ngx_http_echo_handler.o \
	objs/addon/src/ngx_http_echo_filter.o \
	objs/addon/src/ngx_http_echo_sleep.o \
	objs/addon/src/ngx_http_echo_location.o \
	objs/addon/src/ngx_http_echo_echo.o \
	objs/addon/src/ngx_http_echo_request_info.o \
	objs/addon/src/ngx_http_echo_subrequest.o \
	objs/addon/src/ngx_http_echo_foreach.o \
	objs/addon/src/ngx_http_encrypted_session_module.o \
	objs/addon/src/ngx_http_encrypted_session_cipher.o \
	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/addon/src/ngx_http_lua_script.o \
	objs/addon/src/ngx_http_lua_log.o \
	objs/addon/src/ngx_http_lua_subrequest.o \
	objs/addon/src/ngx_http_lua_ndk.o \
	objs/addon/src/ngx_http_lua_control.o \
	objs/addon/src/ngx_http_lua_time.o \
	objs/addon/src/ngx_http_lua_misc.o \
	objs/addon/src/ngx_http_lua_variable.o \
	objs/addon/src/ngx_http_lua_string.o \
	objs/addon/src/ngx_http_lua_output.o \
	objs/addon/src/ngx_http_lua_headers.o \
	objs/addon/src/ngx_http_lua_req_body.o \
	objs/addon/src/ngx_http_lua_uri.o \
	objs/addon/src/ngx_http_lua_args.o \
	objs/addon/src/ngx_http_lua_ctx.o \
	objs/addon/src/ngx_http_lua_regex.o \
	objs/addon/src/ngx_http_lua_module.o \
	objs/addon/src/ngx_http_lua_headers_out.o \
	objs/addon/src/ngx_http_lua_headers_in.o \
	objs/addon/src/ngx_http_lua_directive.o \
	objs/addon/src/ngx_http_lua_consts.o \
	objs/addon/src/ngx_http_lua_exception.o \
	objs/addon/src/ngx_http_lua_util.o \
	objs/addon/src/ngx_http_lua_cache.o \
	objs/addon/src/ngx_http_lua_contentby.o \
	objs/addon/src/ngx_http_lua_rewriteby.o \
	objs/addon/src/ngx_http_lua_accessby.o \
	objs/addon/src/ngx_http_lua_setby.o \
	objs/addon/src/ngx_http_lua_capturefilter.o \
	objs/addon/src/ngx_http_lua_clfactory.o \
	objs/addon/src/ngx_http_lua_pcrefix.o \
	objs/addon/src/ngx_http_lua_headerfilterby.o \
	objs/addon/src/ngx_http_lua_shdict.o \
	objs/addon/src/ngx_http_lua_socket_tcp.o \
	objs/addon/src/ngx_http_lua_api.o \
	objs/addon/src/ngx_http_lua_logby.o \
	objs/addon/src/ngx_http_lua_sleep.o \
	objs/addon/src/ngx_http_lua_semaphore.o \
	objs/addon/src/ngx_http_lua_coroutine.o \
	objs/addon/src/ngx_http_lua_bodyfilterby.o \
	objs/addon/src/ngx_http_lua_initby.o \
	objs/addon/src/ngx_http_lua_initworkerby.o \
	objs/addon/src/ngx_http_lua_socket_udp.o \
	objs/addon/src/ngx_http_lua_req_method.o \
	objs/addon/src/ngx_http_lua_phase.o \
	objs/addon/src/ngx_http_lua_uthread.o \
	objs/addon/src/ngx_http_lua_timer.o \
	objs/addon/src/ngx_http_lua_config.o \
	objs/addon/src/ngx_http_lua_worker.o \
	objs/addon/src/ngx_http_lua_ssl_certby.o \
	objs/addon/src/ngx_http_lua_ssl_ocsp.o \
	objs/addon/src/ngx_http_lua_lex.o \
	objs/addon/src/ngx_http_lua_balancer.o \
	objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
	objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
	objs/addon/src/ngx_http_lua_ssl.o \
	objs/addon/src/ngx_http_lua_log_ringbuf.o \
	objs/addon/src/ngx_http_lua_upstream_module.o \
	objs/addon/src/ngx_http_memc_module.o \
	objs/addon/src/ngx_http_memc_request.o \
	objs/addon/src/ngx_http_memc_response.o \
	objs/addon/src/ngx_http_memc_util.o \
	objs/addon/src/ngx_http_memc_handler.o \
	objs/addon/src/ngx_http_eval_module.o \
	objs/addon/src/ngx_http_redis2_module.o \
	objs/addon/src/ngx_http_redis2_handler.o \
	objs/addon/src/ngx_http_redis2_reply.o \
	objs/addon/src/ngx_http_redis2_util.o \
	objs/addon/src/ngx_http_set_base32.o \
	objs/addon/src/ngx_http_set_default_value.o \
	objs/addon/src/ngx_http_set_hashed_upstream.o \
	objs/addon/src/ngx_http_set_quote_sql.o \
	objs/addon/src/ngx_http_set_quote_json.o \
	objs/addon/src/ngx_http_set_unescape_uri.o \
	objs/addon/src/ngx_http_set_misc_module.o \
	objs/addon/src/ngx_http_set_escape_uri.o \
	objs/addon/src/ngx_http_set_hash.o \
	objs/addon/src/ngx_http_set_local_today.o \
	objs/addon/src/ngx_http_set_hex.o \
	objs/addon/src/ngx_http_set_base64.o \
	objs/addon/src/ngx_http_set_random.o \
	objs/addon/src/ngx_http_set_secure_random.o \
	objs/addon/src/ngx_http_set_rotate.o \
	objs/addon/src/ngx_http_set_hmac.o \
	objs/addon/src/ngx_stream_lua_api.o \
	objs/addon/src/ngx_stream_lua_request.o \
	objs/addon/src/ngx_stream_lua_module.o \
	objs/addon/src/ngx_stream_lua_directive.o \
	objs/addon/src/ngx_stream_lua_lex.o \
	objs/addon/src/ngx_stream_lua_contentby.o \
	objs/addon/src/ngx_stream_lua_util.o \
	objs/addon/src/ngx_stream_lua_cache.o \
	objs/addon/src/ngx_stream_lua_clfactory.o \
	objs/addon/src/ngx_stream_lua_exception.o \
	objs/addon/src/ngx_stream_lua_pcrefix.o \
	objs/addon/src/ngx_stream_lua_uthread.o \
	objs/addon/src/ngx_stream_lua_coroutine.o \
	objs/addon/src/ngx_stream_lua_output.o \
	objs/addon/src/ngx_stream_lua_consts.o \
	objs/addon/src/ngx_stream_lua_log.o \
	objs/addon/src/ngx_stream_lua_time.o \
	objs/addon/src/ngx_stream_lua_string.o \
	objs/addon/src/ngx_stream_lua_control.o \
	objs/addon/src/ngx_stream_lua_sleep.o \
	objs/addon/src/ngx_stream_lua_phase.o \
	objs/addon/src/ngx_stream_lua_ctx.o \
	objs/addon/src/ngx_stream_lua_regex.o \
	objs/addon/src/ngx_stream_lua_script.o \
	objs/addon/src/ngx_stream_lua_shdict.o \
	objs/addon/src/ngx_stream_lua_variable.o \
	objs/addon/src/ngx_stream_lua_timer.o \
	objs/addon/src/ngx_stream_lua_config.o \
	objs/addon/src/ngx_stream_lua_worker.o \
	objs/addon/src/ngx_stream_lua_misc.o \
	objs/addon/src/ngx_stream_lua_initby.o \
	objs/addon/src/ngx_stream_lua_initworkerby.o \
	objs/addon/src/ngx_stream_lua_socket_tcp.o \
	objs/addon/src/ngx_stream_lua_socket_udp.o \
	objs/addon/src/ngx_stream_lua_args.o \
	objs/addon/src/ngx_stream_lua_ssl.o \
	objs/addon/src/ngx_stream_lua_balancer.o \
	objs/addon/src/ngx_stream_lua_logby.o \
	objs/addon/src/ngx_stream_lua_prereadby.o \
	objs/addon/src/ngx_http_srcache_filter_module.o \
	objs/addon/src/ngx_http_srcache_util.o \
	objs/addon/src/ngx_http_srcache_var.o \
	objs/addon/src/ngx_http_srcache_store.o \
	objs/addon/src/ngx_http_srcache_fetch.o \
	objs/addon/src/ngx_http_srcache_headers.o \
	objs/addon/src/ngx_http_xss_filter_module.o \
	objs/addon/src/ngx_http_xss_util.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_module.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_string.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_shm.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_node.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_filter.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_control.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_display.o \
	objs/addon/src/ngx_http_vhost_traffic_status_module.o \
	objs/addon/src/ngx_http_vhost_traffic_status_variables.o \
	objs/addon/src/ngx_http_vhost_traffic_status_string.o \
	objs/addon/src/ngx_http_vhost_traffic_status_shm.o \
	objs/addon/src/ngx_http_vhost_traffic_status_node.o \
	objs/addon/src/ngx_http_vhost_traffic_status_filter.o \
	objs/addon/src/ngx_http_vhost_traffic_status_control.o \
	objs/addon/src/ngx_http_vhost_traffic_status_limit.o \
	objs/addon/src/ngx_http_vhost_traffic_status_display.o \
	objs/addon/src/ngx_http_vhost_traffic_status_set.o \
	objs/addon/src/ngx_http_vhost_traffic_status_dump.o \
	objs/addon/src/ngx_stream_server_traffic_status_module.o \
	objs/addon/src/ngx_stream_server_traffic_status_string.o \
	objs/addon/src/ngx_stream_server_traffic_status_shm.o \
	objs/addon/src/ngx_stream_server_traffic_status_node.o \
	objs/addon/src/ngx_stream_server_traffic_status_filter.o \
	objs/addon/src/ngx_stream_server_traffic_status_limit.o \
	objs/addon/src/ngx_stream_server_traffic_status_variables.o \
	objs/addon/src/ngx_http_sysguard_module.o \
	objs/addon/src/ngx_http_sysguard_sysinfo.o \
	objs/addon/src/ngx_http_sysguard_node.o \
	objs/addon/src/ngx_http_sysguard_variables.o \
	objs/addon/src/ngx_http_form_input_module.o \
	objs/addon/src/ngx_http_iconv_module.o \
	objs/addon/naxsi_src/naxsi_runtime.o \
	objs/addon/naxsi_src/naxsi_config.o \
	objs/addon/naxsi_src/naxsi_utils.o \
	objs/addon/naxsi_src/naxsi_skeleton.o \
	objs/addon/naxsi_src/naxsi_json.o \
	objs/addon/naxsi_src/naxsi_raw.o \
	objs/addon/libinjection/libinjection_sqli.o \
	objs/addon/libinjection/libinjection_xss.o \
	objs/addon/libinjection/libinjection_html5.o \
	objs/addon/nginx/ngx_http_js_module.o \
	objs/addon/nginx/ngx_stream_js_module.o \
	objs/addon/nginx-http-auth-digest/ngx_http_auth_digest_module.o \
	objs/addon/nginx-http-concat/ngx_http_concat_module.o \
	objs/addon/ngx_cache_purge/ngx_cache_purge_module.o \
	objs/addon/src/ngx_coolkit_handlers.o \
	objs/addon/src/ngx_coolkit_module.o \
	objs/addon/src/ngx_coolkit_variables.o \
	objs/addon/src/ngx_http_push_stream_module.o \
	objs/addon/nginx-upload-module/ngx_http_upload_module.o \
	objs/addon/src/ngx_stream_upsync_module.o \
	objs/addon/src/ngx_stream_json.o \
	objs/addon/src/ngx_stream_http_parser.o \
	objs/addon/src/ngx_http_upsync_module.o \
	objs/addon/src/ngx_http_json.o \
	objs/addon/src/ngx_http_parser.o \
	objs/ngx_modules.o

	$(LINK) -o objs/nginx \
	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/os/unix/ngx_linux_aio_read.o \
	objs/src/event/modules/ngx_poll_module.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_xslt_filter_module.o \
	objs/src/http/modules/ngx_http_image_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_huff_decode.o \
	objs/src/http/v2/ngx_http_v2_huff_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_random_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_secure_link_module.o \
	objs/src/http/modules/ngx_http_degradation_module.o \
	objs/src/http/modules/ngx_http_flv_module.o \
	objs/src/http/modules/ngx_http_mp4_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/src/mail/ngx_mail.o \
	objs/src/mail/ngx_mail_core_module.o \
	objs/src/mail/ngx_mail_handler.o \
	objs/src/mail/ngx_mail_parse.o \
	objs/src/mail/ngx_mail_ssl_module.o \
	objs/src/mail/ngx_mail_pop3_module.o \
	objs/src/mail/ngx_mail_pop3_handler.o \
	objs/src/mail/ngx_mail_imap_module.o \
	objs/src/mail/ngx_mail_imap_handler.o \
	objs/src/mail/ngx_mail_smtp_module.o \
	objs/src/mail/ngx_mail_smtp_handler.o \
	objs/src/mail/ngx_mail_auth_http_module.o \
	objs/src/mail/ngx_mail_proxy_module.o \
	objs/src/stream/ngx_stream.o \
	objs/src/stream/ngx_stream_variables.o \
	objs/src/stream/ngx_stream_script.o \
	objs/src/stream/ngx_stream_handler.o \
	objs/src/stream/ngx_stream_core_module.o \
	objs/src/stream/ngx_stream_log_module.o \
	objs/src/stream/ngx_stream_proxy_module.o \
	objs/src/stream/ngx_stream_upstream.o \
	objs/src/stream/ngx_stream_upstream_round_robin.o \
	objs/src/stream/ngx_stream_write_filter_module.o \
	objs/src/stream/ngx_stream_ssl_module.o \
	objs/src/stream/ngx_stream_realip_module.o \
	objs/src/stream/ngx_stream_limit_conn_module.o \
	objs/src/stream/ngx_stream_access_module.o \
	objs/src/stream/ngx_stream_geo_module.o \
	objs/src/stream/ngx_stream_map_module.o \
	objs/src/stream/ngx_stream_split_clients_module.o \
	objs/src/stream/ngx_stream_return_module.o \
	objs/src/stream/ngx_stream_upstream_hash_module.o \
	objs/src/stream/ngx_stream_upstream_least_conn_module.o \
	objs/src/stream/ngx_stream_upstream_zone_module.o \
	objs/src/stream/ngx_stream_ssl_preread_module.o \
	objs/addon/src/ndk.o \
	objs/addon/src/ngx_http_array_var_module.o \
	objs/addon/src/ngx_http_array_var_util.o \
	objs/addon/src/ngx_http_echo_module.o \
	objs/addon/src/ngx_http_echo_util.o \
	objs/addon/src/ngx_http_echo_timer.o \
	objs/addon/src/ngx_http_echo_var.o \
	objs/addon/src/ngx_http_echo_handler.o \
	objs/addon/src/ngx_http_echo_filter.o \
	objs/addon/src/ngx_http_echo_sleep.o \
	objs/addon/src/ngx_http_echo_location.o \
	objs/addon/src/ngx_http_echo_echo.o \
	objs/addon/src/ngx_http_echo_request_info.o \
	objs/addon/src/ngx_http_echo_subrequest.o \
	objs/addon/src/ngx_http_echo_foreach.o \
	objs/addon/src/ngx_http_encrypted_session_module.o \
	objs/addon/src/ngx_http_encrypted_session_cipher.o \
	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/addon/src/ngx_http_lua_script.o \
	objs/addon/src/ngx_http_lua_log.o \
	objs/addon/src/ngx_http_lua_subrequest.o \
	objs/addon/src/ngx_http_lua_ndk.o \
	objs/addon/src/ngx_http_lua_control.o \
	objs/addon/src/ngx_http_lua_time.o \
	objs/addon/src/ngx_http_lua_misc.o \
	objs/addon/src/ngx_http_lua_variable.o \
	objs/addon/src/ngx_http_lua_string.o \
	objs/addon/src/ngx_http_lua_output.o \
	objs/addon/src/ngx_http_lua_headers.o \
	objs/addon/src/ngx_http_lua_req_body.o \
	objs/addon/src/ngx_http_lua_uri.o \
	objs/addon/src/ngx_http_lua_args.o \
	objs/addon/src/ngx_http_lua_ctx.o \
	objs/addon/src/ngx_http_lua_regex.o \
	objs/addon/src/ngx_http_lua_module.o \
	objs/addon/src/ngx_http_lua_headers_out.o \
	objs/addon/src/ngx_http_lua_headers_in.o \
	objs/addon/src/ngx_http_lua_directive.o \
	objs/addon/src/ngx_http_lua_consts.o \
	objs/addon/src/ngx_http_lua_exception.o \
	objs/addon/src/ngx_http_lua_util.o \
	objs/addon/src/ngx_http_lua_cache.o \
	objs/addon/src/ngx_http_lua_contentby.o \
	objs/addon/src/ngx_http_lua_rewriteby.o \
	objs/addon/src/ngx_http_lua_accessby.o \
	objs/addon/src/ngx_http_lua_setby.o \
	objs/addon/src/ngx_http_lua_capturefilter.o \
	objs/addon/src/ngx_http_lua_clfactory.o \
	objs/addon/src/ngx_http_lua_pcrefix.o \
	objs/addon/src/ngx_http_lua_headerfilterby.o \
	objs/addon/src/ngx_http_lua_shdict.o \
	objs/addon/src/ngx_http_lua_socket_tcp.o \
	objs/addon/src/ngx_http_lua_api.o \
	objs/addon/src/ngx_http_lua_logby.o \
	objs/addon/src/ngx_http_lua_sleep.o \
	objs/addon/src/ngx_http_lua_semaphore.o \
	objs/addon/src/ngx_http_lua_coroutine.o \
	objs/addon/src/ngx_http_lua_bodyfilterby.o \
	objs/addon/src/ngx_http_lua_initby.o \
	objs/addon/src/ngx_http_lua_initworkerby.o \
	objs/addon/src/ngx_http_lua_socket_udp.o \
	objs/addon/src/ngx_http_lua_req_method.o \
	objs/addon/src/ngx_http_lua_phase.o \
	objs/addon/src/ngx_http_lua_uthread.o \
	objs/addon/src/ngx_http_lua_timer.o \
	objs/addon/src/ngx_http_lua_config.o \
	objs/addon/src/ngx_http_lua_worker.o \
	objs/addon/src/ngx_http_lua_ssl_certby.o \
	objs/addon/src/ngx_http_lua_ssl_ocsp.o \
	objs/addon/src/ngx_http_lua_lex.o \
	objs/addon/src/ngx_http_lua_balancer.o \
	objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
	objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
	objs/addon/src/ngx_http_lua_ssl.o \
	objs/addon/src/ngx_http_lua_log_ringbuf.o \
	objs/addon/src/ngx_http_lua_upstream_module.o \
	objs/addon/src/ngx_http_memc_module.o \
	objs/addon/src/ngx_http_memc_request.o \
	objs/addon/src/ngx_http_memc_response.o \
	objs/addon/src/ngx_http_memc_util.o \
	objs/addon/src/ngx_http_memc_handler.o \
	objs/addon/src/ngx_http_eval_module.o \
	objs/addon/src/ngx_http_redis2_module.o \
	objs/addon/src/ngx_http_redis2_handler.o \
	objs/addon/src/ngx_http_redis2_reply.o \
	objs/addon/src/ngx_http_redis2_util.o \
	objs/addon/src/ngx_http_set_base32.o \
	objs/addon/src/ngx_http_set_default_value.o \
	objs/addon/src/ngx_http_set_hashed_upstream.o \
	objs/addon/src/ngx_http_set_quote_sql.o \
	objs/addon/src/ngx_http_set_quote_json.o \
	objs/addon/src/ngx_http_set_unescape_uri.o \
	objs/addon/src/ngx_http_set_misc_module.o \
	objs/addon/src/ngx_http_set_escape_uri.o \
	objs/addon/src/ngx_http_set_hash.o \
	objs/addon/src/ngx_http_set_local_today.o \
	objs/addon/src/ngx_http_set_hex.o \
	objs/addon/src/ngx_http_set_base64.o \
	objs/addon/src/ngx_http_set_random.o \
	objs/addon/src/ngx_http_set_secure_random.o \
	objs/addon/src/ngx_http_set_rotate.o \
	objs/addon/src/ngx_http_set_hmac.o \
	objs/addon/src/ngx_stream_lua_api.o \
	objs/addon/src/ngx_stream_lua_request.o \
	objs/addon/src/ngx_stream_lua_module.o \
	objs/addon/src/ngx_stream_lua_directive.o \
	objs/addon/src/ngx_stream_lua_lex.o \
	objs/addon/src/ngx_stream_lua_contentby.o \
	objs/addon/src/ngx_stream_lua_util.o \
	objs/addon/src/ngx_stream_lua_cache.o \
	objs/addon/src/ngx_stream_lua_clfactory.o \
	objs/addon/src/ngx_stream_lua_exception.o \
	objs/addon/src/ngx_stream_lua_pcrefix.o \
	objs/addon/src/ngx_stream_lua_uthread.o \
	objs/addon/src/ngx_stream_lua_coroutine.o \
	objs/addon/src/ngx_stream_lua_output.o \
	objs/addon/src/ngx_stream_lua_consts.o \
	objs/addon/src/ngx_stream_lua_log.o \
	objs/addon/src/ngx_stream_lua_time.o \
	objs/addon/src/ngx_stream_lua_string.o \
	objs/addon/src/ngx_stream_lua_control.o \
	objs/addon/src/ngx_stream_lua_sleep.o \
	objs/addon/src/ngx_stream_lua_phase.o \
	objs/addon/src/ngx_stream_lua_ctx.o \
	objs/addon/src/ngx_stream_lua_regex.o \
	objs/addon/src/ngx_stream_lua_script.o \
	objs/addon/src/ngx_stream_lua_shdict.o \
	objs/addon/src/ngx_stream_lua_variable.o \
	objs/addon/src/ngx_stream_lua_timer.o \
	objs/addon/src/ngx_stream_lua_config.o \
	objs/addon/src/ngx_stream_lua_worker.o \
	objs/addon/src/ngx_stream_lua_misc.o \
	objs/addon/src/ngx_stream_lua_initby.o \
	objs/addon/src/ngx_stream_lua_initworkerby.o \
	objs/addon/src/ngx_stream_lua_socket_tcp.o \
	objs/addon/src/ngx_stream_lua_socket_udp.o \
	objs/addon/src/ngx_stream_lua_args.o \
	objs/addon/src/ngx_stream_lua_ssl.o \
	objs/addon/src/ngx_stream_lua_balancer.o \
	objs/addon/src/ngx_stream_lua_logby.o \
	objs/addon/src/ngx_stream_lua_prereadby.o \
	objs/addon/src/ngx_http_srcache_filter_module.o \
	objs/addon/src/ngx_http_srcache_util.o \
	objs/addon/src/ngx_http_srcache_var.o \
	objs/addon/src/ngx_http_srcache_store.o \
	objs/addon/src/ngx_http_srcache_fetch.o \
	objs/addon/src/ngx_http_srcache_headers.o \
	objs/addon/src/ngx_http_xss_filter_module.o \
	objs/addon/src/ngx_http_xss_util.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_module.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_string.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_shm.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_node.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_filter.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_control.o \
	objs/addon/src/ngx_http_stream_server_traffic_status_display.o \
	objs/addon/src/ngx_http_vhost_traffic_status_module.o \
	objs/addon/src/ngx_http_vhost_traffic_status_variables.o \
	objs/addon/src/ngx_http_vhost_traffic_status_string.o \
	objs/addon/src/ngx_http_vhost_traffic_status_shm.o \
	objs/addon/src/ngx_http_vhost_traffic_status_node.o \
	objs/addon/src/ngx_http_vhost_traffic_status_filter.o \
	objs/addon/src/ngx_http_vhost_traffic_status_control.o \
	objs/addon/src/ngx_http_vhost_traffic_status_limit.o \
	objs/addon/src/ngx_http_vhost_traffic_status_display.o \
	objs/addon/src/ngx_http_vhost_traffic_status_set.o \
	objs/addon/src/ngx_http_vhost_traffic_status_dump.o \
	objs/addon/src/ngx_stream_server_traffic_status_module.o \
	objs/addon/src/ngx_stream_server_traffic_status_string.o \
	objs/addon/src/ngx_stream_server_traffic_status_shm.o \
	objs/addon/src/ngx_stream_server_traffic_status_node.o \
	objs/addon/src/ngx_stream_server_traffic_status_filter.o \
	objs/addon/src/ngx_stream_server_traffic_status_limit.o \
	objs/addon/src/ngx_stream_server_traffic_status_variables.o \
	objs/addon/src/ngx_http_sysguard_module.o \
	objs/addon/src/ngx_http_sysguard_sysinfo.o \
	objs/addon/src/ngx_http_sysguard_node.o \
	objs/addon/src/ngx_http_sysguard_variables.o \
	objs/addon/src/ngx_http_form_input_module.o \
	objs/addon/src/ngx_http_iconv_module.o \
	objs/addon/naxsi_src/naxsi_runtime.o \
	objs/addon/naxsi_src/naxsi_config.o \
	objs/addon/naxsi_src/naxsi_utils.o \
	objs/addon/naxsi_src/naxsi_skeleton.o \
	objs/addon/naxsi_src/naxsi_json.o \
	objs/addon/naxsi_src/naxsi_raw.o \
	objs/addon/libinjection/libinjection_sqli.o \
	objs/addon/libinjection/libinjection_xss.o \
	objs/addon/libinjection/libinjection_html5.o \
	objs/addon/nginx/ngx_http_js_module.o \
	objs/addon/nginx/ngx_stream_js_module.o \
	objs/addon/nginx-http-auth-digest/ngx_http_auth_digest_module.o \
	objs/addon/nginx-http-concat/ngx_http_concat_module.o \
	objs/addon/ngx_cache_purge/ngx_cache_purge_module.o \
	objs/addon/src/ngx_coolkit_handlers.o \
	objs/addon/src/ngx_coolkit_module.o \
	objs/addon/src/ngx_coolkit_variables.o \
	objs/addon/src/ngx_http_push_stream_module.o \
	objs/addon/nginx-upload-module/ngx_http_upload_module.o \
	objs/addon/src/ngx_stream_upsync_module.o \
	objs/addon/src/ngx_stream_json.o \
	objs/addon/src/ngx_stream_http_parser.o \
	objs/addon/src/ngx_http_upsync_module.o \
	objs/addon/src/ngx_http_json.o \
	objs/addon/src/ngx_http_parser.o \
	objs/ngx_modules.o \
	-Wl,-rpath=/usr/local/ssl/lib -L/usr/local/ssl/lib -Wl,-E -Wl,-E -ldl -lpthread -lcrypt -llua -lm -llua -lm /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../build/libnjs.a -lm /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../build/libnjs.a -lm -lm -lm -lpcre /root/rpmbuild/openssl-1.1.0f/.openssl/lib/libssl.a /root/rpmbuild/openssl-1.1.0f/.openssl/lib/libcrypto.a -ldl -lpthread -lz -lxml2 -lxslt -lexslt -lgd \
	-Wl,-E
	


modules:

objs/ngx_modules.o:	$(CORE_DEPS) \
	objs/ngx_modules.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/ngx_modules.o \
		objs/ngx_modules.c


objs/src/core/nginx.o:	$(CORE_DEPS) \
	src/core/nginx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/nginx.o \
		src/core/nginx.c


objs/src/core/ngx_log.o:	$(CORE_DEPS) \
	src/core/ngx_log.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_log.o \
		src/core/ngx_log.c


objs/src/core/ngx_palloc.o:	$(CORE_DEPS) \
	src/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_palloc.o \
		src/core/ngx_palloc.c


objs/src/core/ngx_array.o:	$(CORE_DEPS) \
	src/core/ngx_array.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_array.o \
		src/core/ngx_array.c


objs/src/core/ngx_list.o:	$(CORE_DEPS) \
	src/core/ngx_list.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_list.o \
		src/core/ngx_list.c


objs/src/core/ngx_hash.o:	$(CORE_DEPS) \
	src/core/ngx_hash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_hash.o \
		src/core/ngx_hash.c


objs/src/core/ngx_buf.o:	$(CORE_DEPS) \
	src/core/ngx_buf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_buf.o \
		src/core/ngx_buf.c


objs/src/core/ngx_queue.o:	$(CORE_DEPS) \
	src/core/ngx_queue.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_queue.o \
		src/core/ngx_queue.c


objs/src/core/ngx_output_chain.o:	$(CORE_DEPS) \
	src/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_output_chain.o \
		src/core/ngx_output_chain.c


objs/src/core/ngx_string.o:	$(CORE_DEPS) \
	src/core/ngx_string.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_string.o \
		src/core/ngx_string.c


objs/src/core/ngx_parse.o:	$(CORE_DEPS) \
	src/core/ngx_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse.o \
		src/core/ngx_parse.c


objs/src/core/ngx_parse_time.o:	$(CORE_DEPS) \
	src/core/ngx_parse_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse_time.o \
		src/core/ngx_parse_time.c


objs/src/core/ngx_inet.o:	$(CORE_DEPS) \
	src/core/ngx_inet.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_inet.o \
		src/core/ngx_inet.c


objs/src/core/ngx_file.o:	$(CORE_DEPS) \
	src/core/ngx_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_file.o \
		src/core/ngx_file.c


objs/src/core/ngx_crc32.o:	$(CORE_DEPS) \
	src/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crc32.o \
		src/core/ngx_crc32.c


objs/src/core/ngx_murmurhash.o:	$(CORE_DEPS) \
	src/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_murmurhash.o \
		src/core/ngx_murmurhash.c


objs/src/core/ngx_md5.o:	$(CORE_DEPS) \
	src/core/ngx_md5.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_md5.o \
		src/core/ngx_md5.c


objs/src/core/ngx_sha1.o:	$(CORE_DEPS) \
	src/core/ngx_sha1.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_sha1.o \
		src/core/ngx_sha1.c


objs/src/core/ngx_rbtree.o:	$(CORE_DEPS) \
	src/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rbtree.o \
		src/core/ngx_rbtree.c


objs/src/core/ngx_radix_tree.o:	$(CORE_DEPS) \
	src/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_radix_tree.o \
		src/core/ngx_radix_tree.c


objs/src/core/ngx_slab.o:	$(CORE_DEPS) \
	src/core/ngx_slab.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_slab.o \
		src/core/ngx_slab.c


objs/src/core/ngx_times.o:	$(CORE_DEPS) \
	src/core/ngx_times.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_times.o \
		src/core/ngx_times.c


objs/src/core/ngx_shmtx.o:	$(CORE_DEPS) \
	src/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_shmtx.o \
		src/core/ngx_shmtx.c


objs/src/core/ngx_connection.o:	$(CORE_DEPS) \
	src/core/ngx_connection.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_connection.o \
		src/core/ngx_connection.c


objs/src/core/ngx_cycle.o:	$(CORE_DEPS) \
	src/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cycle.o \
		src/core/ngx_cycle.c


objs/src/core/ngx_spinlock.o:	$(CORE_DEPS) \
	src/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_spinlock.o \
		src/core/ngx_spinlock.c


objs/src/core/ngx_rwlock.o:	$(CORE_DEPS) \
	src/core/ngx_rwlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rwlock.o \
		src/core/ngx_rwlock.c


objs/src/core/ngx_cpuinfo.o:	$(CORE_DEPS) \
	src/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cpuinfo.o \
		src/core/ngx_cpuinfo.c


objs/src/core/ngx_conf_file.o:	$(CORE_DEPS) \
	src/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_conf_file.o \
		src/core/ngx_conf_file.c


objs/src/core/ngx_module.o:	$(CORE_DEPS) \
	src/core/ngx_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_module.o \
		src/core/ngx_module.c


objs/src/core/ngx_resolver.o:	$(CORE_DEPS) \
	src/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_resolver.o \
		src/core/ngx_resolver.c


objs/src/core/ngx_open_file_cache.o:	$(CORE_DEPS) \
	src/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_open_file_cache.o \
		src/core/ngx_open_file_cache.c


objs/src/core/ngx_crypt.o:	$(CORE_DEPS) \
	src/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crypt.o \
		src/core/ngx_crypt.c


objs/src/core/ngx_proxy_protocol.o:	$(CORE_DEPS) \
	src/core/ngx_proxy_protocol.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_proxy_protocol.o \
		src/core/ngx_proxy_protocol.c


objs/src/core/ngx_syslog.o:	$(CORE_DEPS) \
	src/core/ngx_syslog.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_syslog.o \
		src/core/ngx_syslog.c


objs/src/event/ngx_event.o:	$(CORE_DEPS) \
	src/event/ngx_event.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event.o \
		src/event/ngx_event.c


objs/src/event/ngx_event_timer.o:	$(CORE_DEPS) \
	src/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_timer.o \
		src/event/ngx_event_timer.c


objs/src/event/ngx_event_posted.o:	$(CORE_DEPS) \
	src/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_posted.o \
		src/event/ngx_event_posted.c


objs/src/event/ngx_event_accept.o:	$(CORE_DEPS) \
	src/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_accept.o \
		src/event/ngx_event_accept.c


objs/src/event/ngx_event_connect.o:	$(CORE_DEPS) \
	src/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_connect.o \
		src/event/ngx_event_connect.c


objs/src/event/ngx_event_pipe.o:	$(CORE_DEPS) \
	src/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_pipe.o \
		src/event/ngx_event_pipe.c


objs/src/os/unix/ngx_time.o:	$(CORE_DEPS) \
	src/os/unix/ngx_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_time.o \
		src/os/unix/ngx_time.c


objs/src/os/unix/ngx_errno.o:	$(CORE_DEPS) \
	src/os/unix/ngx_errno.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_errno.o \
		src/os/unix/ngx_errno.c


objs/src/os/unix/ngx_alloc.o:	$(CORE_DEPS) \
	src/os/unix/ngx_alloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_alloc.o \
		src/os/unix/ngx_alloc.c


objs/src/os/unix/ngx_files.o:	$(CORE_DEPS) \
	src/os/unix/ngx_files.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_files.o \
		src/os/unix/ngx_files.c


objs/src/os/unix/ngx_socket.o:	$(CORE_DEPS) \
	src/os/unix/ngx_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_socket.o \
		src/os/unix/ngx_socket.c


objs/src/os/unix/ngx_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_recv.o \
		src/os/unix/ngx_recv.c


objs/src/os/unix/ngx_readv_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_readv_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_readv_chain.o \
		src/os/unix/ngx_readv_chain.c


objs/src/os/unix/ngx_udp_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_recv.o \
		src/os/unix/ngx_udp_recv.c


objs/src/os/unix/ngx_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_send.o \
		src/os/unix/ngx_send.c


objs/src/os/unix/ngx_writev_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_writev_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_writev_chain.o \
		src/os/unix/ngx_writev_chain.c


objs/src/os/unix/ngx_udp_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_send.o \
		src/os/unix/ngx_udp_send.c


objs/src/os/unix/ngx_udp_sendmsg_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_sendmsg_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_sendmsg_chain.o \
		src/os/unix/ngx_udp_sendmsg_chain.c


objs/src/os/unix/ngx_channel.o:	$(CORE_DEPS) \
	src/os/unix/ngx_channel.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_channel.o \
		src/os/unix/ngx_channel.c


objs/src/os/unix/ngx_shmem.o:	$(CORE_DEPS) \
	src/os/unix/ngx_shmem.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_shmem.o \
		src/os/unix/ngx_shmem.c


objs/src/os/unix/ngx_process.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process.o \
		src/os/unix/ngx_process.c


objs/src/os/unix/ngx_daemon.o:	$(CORE_DEPS) \
	src/os/unix/ngx_daemon.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_daemon.o \
		src/os/unix/ngx_daemon.c


objs/src/os/unix/ngx_setaffinity.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setaffinity.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setaffinity.o \
		src/os/unix/ngx_setaffinity.c


objs/src/os/unix/ngx_setproctitle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setproctitle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setproctitle.o \
		src/os/unix/ngx_setproctitle.c


objs/src/os/unix/ngx_posix_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_posix_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_posix_init.o \
		src/os/unix/ngx_posix_init.c


objs/src/os/unix/ngx_user.o:	$(CORE_DEPS) \
	src/os/unix/ngx_user.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_user.o \
		src/os/unix/ngx_user.c


objs/src/os/unix/ngx_dlopen.o:	$(CORE_DEPS) \
	src/os/unix/ngx_dlopen.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_dlopen.o \
		src/os/unix/ngx_dlopen.c


objs/src/os/unix/ngx_process_cycle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process_cycle.o \
		src/os/unix/ngx_process_cycle.c


objs/src/os/unix/ngx_linux_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_init.o \
		src/os/unix/ngx_linux_init.c


objs/src/event/modules/ngx_epoll_module.o:	$(CORE_DEPS) \
	src/event/modules/ngx_epoll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/modules/ngx_epoll_module.o \
		src/event/modules/ngx_epoll_module.c


objs/src/os/unix/ngx_linux_sendfile_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_sendfile_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_sendfile_chain.o \
		src/os/unix/ngx_linux_sendfile_chain.c


objs/src/os/unix/ngx_linux_aio_read.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_aio_read.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_aio_read.o \
		src/os/unix/ngx_linux_aio_read.c


objs/src/event/modules/ngx_poll_module.o:	$(CORE_DEPS) \
	src/event/modules/ngx_poll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/modules/ngx_poll_module.o \
		src/event/modules/ngx_poll_module.c


objs/src/event/ngx_event_openssl.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl.o \
		src/event/ngx_event_openssl.c


objs/src/event/ngx_event_openssl_stapling.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl_stapling.o \
		src/event/ngx_event_openssl_stapling.c


objs/src/core/ngx_regex.o:	$(CORE_DEPS) \
	src/core/ngx_regex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_regex.o \
		src/core/ngx_regex.c


objs/src/http/ngx_http.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http.o \
		src/http/ngx_http.c


objs/src/http/ngx_http_core_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_core_module.o \
		src/http/ngx_http_core_module.c


objs/src/http/ngx_http_special_response.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_special_response.o \
		src/http/ngx_http_special_response.c


objs/src/http/ngx_http_request.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request.o \
		src/http/ngx_http_request.c


objs/src/http/ngx_http_parse.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_parse.o \
		src/http/ngx_http_parse.c


objs/src/http/modules/ngx_http_log_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_log_module.o \
		src/http/modules/ngx_http_log_module.c


objs/src/http/ngx_http_request_body.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request_body.o \
		src/http/ngx_http_request_body.c


objs/src/http/ngx_http_variables.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_variables.o \
		src/http/ngx_http_variables.c


objs/src/http/ngx_http_script.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_script.o \
		src/http/ngx_http_script.c


objs/src/http/ngx_http_upstream.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream.o \
		src/http/ngx_http_upstream.c


objs/src/http/ngx_http_upstream_round_robin.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream_round_robin.o \
		src/http/ngx_http_upstream_round_robin.c


objs/src/http/ngx_http_file_cache.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_file_cache.o \
		src/http/ngx_http_file_cache.c


objs/src/http/ngx_http_write_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_write_filter_module.o \
		src/http/ngx_http_write_filter_module.c


objs/src/http/ngx_http_header_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_header_filter_module.o \
		src/http/ngx_http_header_filter_module.c


objs/src/http/modules/ngx_http_chunked_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_chunked_filter_module.o \
		src/http/modules/ngx_http_chunked_filter_module.c


objs/src/http/v2/ngx_http_v2_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_filter_module.o \
		src/http/v2/ngx_http_v2_filter_module.c


objs/src/http/modules/ngx_http_range_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_range_filter_module.o \
		src/http/modules/ngx_http_range_filter_module.c


objs/src/http/modules/ngx_http_gzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_filter_module.o \
		src/http/modules/ngx_http_gzip_filter_module.c


objs/src/http/ngx_http_postpone_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_postpone_filter_module.o \
		src/http/ngx_http_postpone_filter_module.c


objs/src/http/modules/ngx_http_ssi_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssi_filter_module.o \
		src/http/modules/ngx_http_ssi_filter_module.c


objs/src/http/modules/ngx_http_charset_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_charset_filter_module.o \
		src/http/modules/ngx_http_charset_filter_module.c


objs/src/http/modules/ngx_http_xslt_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_xslt_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_xslt_filter_module.o \
		src/http/modules/ngx_http_xslt_filter_module.c


objs/src/http/modules/ngx_http_image_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_image_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_image_filter_module.o \
		src/http/modules/ngx_http_image_filter_module.c


objs/src/http/modules/ngx_http_sub_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_sub_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_sub_filter_module.o \
		src/http/modules/ngx_http_sub_filter_module.c


objs/src/http/modules/ngx_http_gunzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gunzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gunzip_filter_module.o \
		src/http/modules/ngx_http_gunzip_filter_module.c


objs/src/http/modules/ngx_http_userid_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_userid_filter_module.o \
		src/http/modules/ngx_http_userid_filter_module.c


objs/src/http/modules/ngx_http_headers_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_headers_filter_module.o \
		src/http/modules/ngx_http_headers_filter_module.c


objs/src/http/ngx_http_copy_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_copy_filter_module.o \
		src/http/ngx_http_copy_filter_module.c


objs/src/http/modules/ngx_http_not_modified_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_not_modified_filter_module.o \
		src/http/modules/ngx_http_not_modified_filter_module.c


objs/src/http/modules/ngx_http_slice_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_slice_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_slice_filter_module.o \
		src/http/modules/ngx_http_slice_filter_module.c


objs/src/http/v2/ngx_http_v2.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2.o \
		src/http/v2/ngx_http_v2.c


objs/src/http/v2/ngx_http_v2_table.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_table.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_table.o \
		src/http/v2/ngx_http_v2_table.c


objs/src/http/v2/ngx_http_v2_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_encode.o \
		src/http/v2/ngx_http_v2_encode.c


objs/src/http/v2/ngx_http_v2_huff_decode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_huff_decode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_huff_decode.o \
		src/http/v2/ngx_http_v2_huff_decode.c


objs/src/http/v2/ngx_http_v2_huff_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_huff_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_huff_encode.o \
		src/http/v2/ngx_http_v2_huff_encode.c


objs/src/http/v2/ngx_http_v2_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_module.o \
		src/http/v2/ngx_http_v2_module.c


objs/src/http/modules/ngx_http_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_static_module.o \
		src/http/modules/ngx_http_static_module.c


objs/src/http/modules/ngx_http_gzip_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_static_module.o \
		src/http/modules/ngx_http_gzip_static_module.c


objs/src/http/modules/ngx_http_dav_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_dav_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_dav_module.o \
		src/http/modules/ngx_http_dav_module.c


objs/src/http/modules/ngx_http_autoindex_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_autoindex_module.o \
		src/http/modules/ngx_http_autoindex_module.c


objs/src/http/modules/ngx_http_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_index_module.o \
		src/http/modules/ngx_http_index_module.c


objs/src/http/modules/ngx_http_random_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_random_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_random_index_module.o \
		src/http/modules/ngx_http_random_index_module.c


objs/src/http/modules/ngx_http_mirror_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_mirror_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_mirror_module.o \
		src/http/modules/ngx_http_mirror_module.c


objs/src/http/modules/ngx_http_try_files_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_try_files_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_try_files_module.o \
		src/http/modules/ngx_http_try_files_module.c


objs/src/http/modules/ngx_http_auth_basic_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_auth_basic_module.o \
		src/http/modules/ngx_http_auth_basic_module.c


objs/src/http/modules/ngx_http_access_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_access_module.o \
		src/http/modules/ngx_http_access_module.c


objs/src/http/modules/ngx_http_limit_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_conn_module.o \
		src/http/modules/ngx_http_limit_conn_module.c


objs/src/http/modules/ngx_http_limit_req_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_req_module.o \
		src/http/modules/ngx_http_limit_req_module.c


objs/src/http/modules/ngx_http_realip_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_realip_module.o \
		src/http/modules/ngx_http_realip_module.c


objs/src/http/modules/ngx_http_geo_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_geo_module.o \
		src/http/modules/ngx_http_geo_module.c


objs/src/http/modules/ngx_http_map_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_map_module.o \
		src/http/modules/ngx_http_map_module.c


objs/src/http/modules/ngx_http_split_clients_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_split_clients_module.o \
		src/http/modules/ngx_http_split_clients_module.c


objs/src/http/modules/ngx_http_referer_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_referer_module.o \
		src/http/modules/ngx_http_referer_module.c


objs/src/http/modules/ngx_http_rewrite_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_rewrite_module.o \
		src/http/modules/ngx_http_rewrite_module.c


objs/src/http/modules/ngx_http_ssl_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssl_module.o \
		src/http/modules/ngx_http_ssl_module.c


objs/src/http/modules/ngx_http_proxy_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_proxy_module.o \
		src/http/modules/ngx_http_proxy_module.c


objs/src/http/modules/ngx_http_fastcgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_fastcgi_module.o \
		src/http/modules/ngx_http_fastcgi_module.c


objs/src/http/modules/ngx_http_uwsgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_uwsgi_module.o \
		src/http/modules/ngx_http_uwsgi_module.c


objs/src/http/modules/ngx_http_scgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_scgi_module.o \
		src/http/modules/ngx_http_scgi_module.c


objs/src/http/modules/ngx_http_grpc_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_grpc_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_grpc_module.o \
		src/http/modules/ngx_http_grpc_module.c


objs/src/http/modules/ngx_http_memcached_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_memcached_module.o \
		src/http/modules/ngx_http_memcached_module.c


objs/src/http/modules/ngx_http_empty_gif_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_empty_gif_module.o \
		src/http/modules/ngx_http_empty_gif_module.c


objs/src/http/modules/ngx_http_browser_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_browser_module.o \
		src/http/modules/ngx_http_browser_module.c


objs/src/http/modules/ngx_http_secure_link_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_secure_link_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_secure_link_module.o \
		src/http/modules/ngx_http_secure_link_module.c


objs/src/http/modules/ngx_http_degradation_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_degradation_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_degradation_module.o \
		src/http/modules/ngx_http_degradation_module.c


objs/src/http/modules/ngx_http_flv_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_flv_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_flv_module.o \
		src/http/modules/ngx_http_flv_module.c


objs/src/http/modules/ngx_http_mp4_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_mp4_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_mp4_module.o \
		src/http/modules/ngx_http_mp4_module.c


objs/src/http/modules/ngx_http_upstream_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_hash_module.o \
		src/http/modules/ngx_http_upstream_hash_module.c


objs/src/http/modules/ngx_http_upstream_ip_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
		src/http/modules/ngx_http_upstream_ip_hash_module.c


objs/src/http/modules/ngx_http_upstream_least_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
		src/http/modules/ngx_http_upstream_least_conn_module.c


objs/src/http/modules/ngx_http_upstream_keepalive_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
		src/http/modules/ngx_http_upstream_keepalive_module.c


objs/src/http/modules/ngx_http_upstream_zone_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_zone_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_zone_module.o \
		src/http/modules/ngx_http_upstream_zone_module.c


objs/src/http/modules/ngx_http_stub_status_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_stub_status_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_stub_status_module.o \
		src/http/modules/ngx_http_stub_status_module.c


objs/src/mail/ngx_mail.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail.o \
		src/mail/ngx_mail.c


objs/src/mail/ngx_mail_core_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_core_module.o \
		src/mail/ngx_mail_core_module.c


objs/src/mail/ngx_mail_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_handler.o \
		src/mail/ngx_mail_handler.c


objs/src/mail/ngx_mail_parse.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_parse.o \
		src/mail/ngx_mail_parse.c


objs/src/mail/ngx_mail_ssl_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_ssl_module.o \
		src/mail/ngx_mail_ssl_module.c


objs/src/mail/ngx_mail_pop3_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_pop3_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_pop3_module.o \
		src/mail/ngx_mail_pop3_module.c


objs/src/mail/ngx_mail_pop3_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_pop3_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_pop3_handler.o \
		src/mail/ngx_mail_pop3_handler.c


objs/src/mail/ngx_mail_imap_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_imap_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_imap_module.o \
		src/mail/ngx_mail_imap_module.c


objs/src/mail/ngx_mail_imap_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_imap_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_imap_handler.o \
		src/mail/ngx_mail_imap_handler.c


objs/src/mail/ngx_mail_smtp_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_smtp_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_smtp_module.o \
		src/mail/ngx_mail_smtp_module.c


objs/src/mail/ngx_mail_smtp_handler.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_smtp_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_smtp_handler.o \
		src/mail/ngx_mail_smtp_handler.c


objs/src/mail/ngx_mail_auth_http_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_auth_http_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_auth_http_module.o \
		src/mail/ngx_mail_auth_http_module.c


objs/src/mail/ngx_mail_proxy_module.o:	$(CORE_DEPS) $(MAIL_DEPS) \
	src/mail/ngx_mail_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(MAIL_INCS) \
		-o objs/src/mail/ngx_mail_proxy_module.o \
		src/mail/ngx_mail_proxy_module.c


objs/src/stream/ngx_stream.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream.o \
		src/stream/ngx_stream.c


objs/src/stream/ngx_stream_variables.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_variables.o \
		src/stream/ngx_stream_variables.c


objs/src/stream/ngx_stream_script.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_script.o \
		src/stream/ngx_stream_script.c


objs/src/stream/ngx_stream_handler.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_handler.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_handler.o \
		src/stream/ngx_stream_handler.c


objs/src/stream/ngx_stream_core_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_core_module.o \
		src/stream/ngx_stream_core_module.c


objs/src/stream/ngx_stream_log_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_log_module.o \
		src/stream/ngx_stream_log_module.c


objs/src/stream/ngx_stream_proxy_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_proxy_module.o \
		src/stream/ngx_stream_proxy_module.c


objs/src/stream/ngx_stream_upstream.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream.o \
		src/stream/ngx_stream_upstream.c


objs/src/stream/ngx_stream_upstream_round_robin.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_round_robin.o \
		src/stream/ngx_stream_upstream_round_robin.c


objs/src/stream/ngx_stream_write_filter_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_write_filter_module.o \
		src/stream/ngx_stream_write_filter_module.c


objs/src/stream/ngx_stream_ssl_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_ssl_module.o \
		src/stream/ngx_stream_ssl_module.c


objs/src/stream/ngx_stream_realip_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_realip_module.o \
		src/stream/ngx_stream_realip_module.c


objs/src/stream/ngx_stream_limit_conn_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_limit_conn_module.o \
		src/stream/ngx_stream_limit_conn_module.c


objs/src/stream/ngx_stream_access_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_access_module.o \
		src/stream/ngx_stream_access_module.c


objs/src/stream/ngx_stream_geo_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_geo_module.o \
		src/stream/ngx_stream_geo_module.c


objs/src/stream/ngx_stream_map_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_map_module.o \
		src/stream/ngx_stream_map_module.c


objs/src/stream/ngx_stream_split_clients_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_split_clients_module.o \
		src/stream/ngx_stream_split_clients_module.c


objs/src/stream/ngx_stream_return_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_return_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_return_module.o \
		src/stream/ngx_stream_return_module.c


objs/src/stream/ngx_stream_upstream_hash_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_hash_module.o \
		src/stream/ngx_stream_upstream_hash_module.c


objs/src/stream/ngx_stream_upstream_least_conn_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_least_conn_module.o \
		src/stream/ngx_stream_upstream_least_conn_module.c


objs/src/stream/ngx_stream_upstream_zone_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_upstream_zone_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_upstream_zone_module.o \
		src/stream/ngx_stream_upstream_zone_module.c


objs/src/stream/ngx_stream_ssl_preread_module.o:	$(CORE_DEPS) $(STREAM_DEPS) \
	src/stream/ngx_stream_ssl_preread_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(STREAM_INCS) \
		-o objs/src/stream/ngx_stream_ssl_preread_module.o \
		src/stream/ngx_stream_ssl_preread_module.c


objs/addon/src/ndk.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src/ndk.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ndk.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/ngx_devel_kit/src/ndk.c


objs/addon/src/ngx_http_array_var_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ngx_http_array_var_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_array_var_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ngx_http_array_var_module.c


objs/addon/src/ngx_http_array_var_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ngx_http_array_var_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_array_var_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/array-var-nginx-module/src/ngx_http_array_var_util.c


objs/addon/src/ngx_http_echo_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_module.c


objs/addon/src/ngx_http_echo_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_util.c


objs/addon/src/ngx_http_echo_timer.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_timer.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_timer.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_timer.c


objs/addon/src/ngx_http_echo_var.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_var.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_var.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_var.c


objs/addon/src/ngx_http_echo_handler.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_handler.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_handler.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_handler.c


objs/addon/src/ngx_http_echo_filter.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_filter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_filter.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_filter.c


objs/addon/src/ngx_http_echo_sleep.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_sleep.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_sleep.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_sleep.c


objs/addon/src/ngx_http_echo_location.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_location.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_location.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_location.c


objs/addon/src/ngx_http_echo_echo.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_echo.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_echo.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_echo.c


objs/addon/src/ngx_http_echo_request_info.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_request_info.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_request_info.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_request_info.c


objs/addon/src/ngx_http_echo_subrequest.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_subrequest.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_subrequest.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_subrequest.c


objs/addon/src/ngx_http_echo_foreach.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_foreach.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_echo_foreach.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/echo-nginx-module/src/ngx_http_echo_foreach.c


objs/addon/src/ngx_http_encrypted_session_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ngx_http_encrypted_session_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_encrypted_session_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ngx_http_encrypted_session_module.c


objs/addon/src/ngx_http_encrypted_session_cipher.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ngx_http_encrypted_session_cipher.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_encrypted_session_cipher.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/encrypted-session-nginx-module/src/ngx_http_encrypted_session_cipher.c


objs/addon/src/ngx_http_headers_more_filter_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_filter_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_filter_module.c


objs/addon/src/ngx_http_headers_more_headers_out.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_out.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_out.c


objs/addon/src/ngx_http_headers_more_headers_in.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_in.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_headers_in.c


objs/addon/src/ngx_http_headers_more_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/headers-more-nginx-module/src/ngx_http_headers_more_util.c


objs/addon/src/ngx_http_lua_script.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_script.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_script.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_script.c


objs/addon/src/ngx_http_lua_log.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_log.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log.c


objs/addon/src/ngx_http_lua_subrequest.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_subrequest.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_subrequest.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_subrequest.c


objs/addon/src/ngx_http_lua_ndk.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ndk.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ndk.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ndk.c


objs/addon/src/ngx_http_lua_control.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_control.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_control.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_control.c


objs/addon/src/ngx_http_lua_time.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_time.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_time.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_time.c


objs/addon/src/ngx_http_lua_misc.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_misc.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_misc.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_misc.c


objs/addon/src/ngx_http_lua_variable.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_variable.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_variable.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_variable.c


objs/addon/src/ngx_http_lua_string.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_string.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_string.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_string.c


objs/addon/src/ngx_http_lua_output.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_output.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_output.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_output.c


objs/addon/src/ngx_http_lua_headers.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers.c


objs/addon/src/ngx_http_lua_req_body.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_body.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_req_body.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_body.c


objs/addon/src/ngx_http_lua_uri.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uri.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_uri.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uri.c


objs/addon/src/ngx_http_lua_args.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_args.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_args.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_args.c


objs/addon/src/ngx_http_lua_ctx.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ctx.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ctx.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ctx.c


objs/addon/src/ngx_http_lua_regex.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_regex.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_regex.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_regex.c


objs/addon/src/ngx_http_lua_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_module.c


objs/addon/src/ngx_http_lua_headers_out.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_out.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers_out.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_out.c


objs/addon/src/ngx_http_lua_headers_in.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_in.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headers_in.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headers_in.c


objs/addon/src/ngx_http_lua_directive.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_directive.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_directive.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_directive.c


objs/addon/src/ngx_http_lua_consts.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_consts.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_consts.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_consts.c


objs/addon/src/ngx_http_lua_exception.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_exception.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_exception.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_exception.c


objs/addon/src/ngx_http_lua_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_util.c


objs/addon/src/ngx_http_lua_cache.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_cache.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_cache.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_cache.c


objs/addon/src/ngx_http_lua_contentby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_contentby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_contentby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_contentby.c


objs/addon/src/ngx_http_lua_rewriteby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_rewriteby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_rewriteby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_rewriteby.c


objs/addon/src/ngx_http_lua_accessby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_accessby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_accessby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_accessby.c


objs/addon/src/ngx_http_lua_setby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_setby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_setby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_setby.c


objs/addon/src/ngx_http_lua_capturefilter.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_capturefilter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_capturefilter.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_capturefilter.c


objs/addon/src/ngx_http_lua_clfactory.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_clfactory.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_clfactory.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_clfactory.c


objs/addon/src/ngx_http_lua_pcrefix.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_pcrefix.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_pcrefix.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_pcrefix.c


objs/addon/src/ngx_http_lua_headerfilterby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headerfilterby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_headerfilterby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_headerfilterby.c


objs/addon/src/ngx_http_lua_shdict.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_shdict.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_shdict.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_shdict.c


objs/addon/src/ngx_http_lua_socket_tcp.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_tcp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_socket_tcp.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_tcp.c


objs/addon/src/ngx_http_lua_api.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_api.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_api.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_api.c


objs/addon/src/ngx_http_lua_logby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_logby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_logby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_logby.c


objs/addon/src/ngx_http_lua_sleep.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_sleep.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_sleep.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_sleep.c


objs/addon/src/ngx_http_lua_semaphore.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_semaphore.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_semaphore.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_semaphore.c


objs/addon/src/ngx_http_lua_coroutine.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_coroutine.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_coroutine.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_coroutine.c


objs/addon/src/ngx_http_lua_bodyfilterby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_bodyfilterby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_bodyfilterby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_bodyfilterby.c


objs/addon/src/ngx_http_lua_initby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_initby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initby.c


objs/addon/src/ngx_http_lua_initworkerby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initworkerby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_initworkerby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_initworkerby.c


objs/addon/src/ngx_http_lua_socket_udp.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_udp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_socket_udp.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_socket_udp.c


objs/addon/src/ngx_http_lua_req_method.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_method.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_req_method.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_req_method.c


objs/addon/src/ngx_http_lua_phase.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_phase.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_phase.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_phase.c


objs/addon/src/ngx_http_lua_uthread.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uthread.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_uthread.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_uthread.c


objs/addon/src/ngx_http_lua_timer.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_timer.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_timer.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_timer.c


objs/addon/src/ngx_http_lua_config.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_config.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_config.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_config.c


objs/addon/src/ngx_http_lua_worker.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_worker.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_worker.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_worker.c


objs/addon/src/ngx_http_lua_ssl_certby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_certby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_certby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_certby.c


objs/addon/src/ngx_http_lua_ssl_ocsp.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_ocsp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_ocsp.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_ocsp.c


objs/addon/src/ngx_http_lua_lex.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_lex.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_lex.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_lex.c


objs/addon/src/ngx_http_lua_balancer.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_balancer.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_balancer.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_balancer.c


objs/addon/src/ngx_http_lua_ssl_session_storeby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_session_storeby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_storeby.c


objs/addon/src/ngx_http_lua_ssl_session_fetchby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl_session_fetchby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl_session_fetchby.c


objs/addon/src/ngx_http_lua_ssl.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_ssl.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_ssl.c


objs/addon/src/ngx_http_lua_log_ringbuf.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log_ringbuf.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_log_ringbuf.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-nginx-module/src/ngx_http_lua_log_ringbuf.c


objs/addon/src/ngx_http_lua_upstream_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/lua-upstream-nginx-module/src/ngx_http_lua_upstream_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_lua_upstream_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/lua-upstream-nginx-module/src/ngx_http_lua_upstream_module.c


objs/addon/src/ngx_http_memc_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_module.c


objs/addon/src/ngx_http_memc_request.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_request.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_request.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_request.c


objs/addon/src/ngx_http_memc_response.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_response.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_response.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_response.c


objs/addon/src/ngx_http_memc_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_util.c


objs/addon/src/ngx_http_memc_handler.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_handler.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_memc_handler.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/memc-nginx-module/src/ngx_http_memc_handler.c


objs/addon/src/ngx_http_eval_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-eval-module/src/ngx_http_eval_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_eval_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-eval-module/src/ngx_http_eval_module.c


objs/addon/src/ngx_http_redis2_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_redis2_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_module.c


objs/addon/src/ngx_http_redis2_handler.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_handler.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_redis2_handler.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_handler.c


objs/addon/src/ngx_http_redis2_reply.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_reply.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_redis2_reply.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_reply.c


objs/addon/src/ngx_http_redis2_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_redis2_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/redis2-nginx-module/src/ngx_http_redis2_util.c


objs/addon/src/ngx_http_set_base32.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_base32.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_base32.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_base32.c


objs/addon/src/ngx_http_set_default_value.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_default_value.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_default_value.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_default_value.c


objs/addon/src/ngx_http_set_hashed_upstream.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hashed_upstream.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hashed_upstream.c


objs/addon/src/ngx_http_set_quote_sql.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_sql.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_quote_sql.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_sql.c


objs/addon/src/ngx_http_set_quote_json.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_json.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_quote_json.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_quote_json.c


objs/addon/src/ngx_http_set_unescape_uri.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_unescape_uri.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_unescape_uri.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_unescape_uri.c


objs/addon/src/ngx_http_set_misc_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_misc_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_misc_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_misc_module.c


objs/addon/src/ngx_http_set_escape_uri.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_escape_uri.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_escape_uri.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_escape_uri.c


objs/addon/src/ngx_http_set_hash.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hash.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hash.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hash.c


objs/addon/src/ngx_http_set_local_today.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_local_today.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_local_today.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_local_today.c


objs/addon/src/ngx_http_set_hex.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hex.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hex.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hex.c


objs/addon/src/ngx_http_set_base64.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_base64.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_base64.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_base64.c


objs/addon/src/ngx_http_set_random.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_random.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_random.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_random.c


objs/addon/src/ngx_http_set_secure_random.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_secure_random.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_secure_random.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_secure_random.c


objs/addon/src/ngx_http_set_rotate.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_rotate.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_rotate.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_rotate.c


objs/addon/src/ngx_http_set_hmac.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hmac.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_set_hmac.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/set-misc-nginx-module/src/ngx_http_set_hmac.c


objs/addon/src/ngx_stream_lua_api.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_api.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_api.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_api.c


objs/addon/src/ngx_stream_lua_request.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_request.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_request.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_request.c


objs/addon/src/ngx_stream_lua_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_module.c


objs/addon/src/ngx_stream_lua_directive.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_directive.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_directive.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_directive.c


objs/addon/src/ngx_stream_lua_lex.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_lex.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_lex.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_lex.c


objs/addon/src/ngx_stream_lua_contentby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_contentby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_contentby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_contentby.c


objs/addon/src/ngx_stream_lua_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_util.c


objs/addon/src/ngx_stream_lua_cache.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_cache.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_cache.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_cache.c


objs/addon/src/ngx_stream_lua_clfactory.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_clfactory.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_clfactory.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_clfactory.c


objs/addon/src/ngx_stream_lua_exception.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_exception.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_exception.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_exception.c


objs/addon/src/ngx_stream_lua_pcrefix.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_pcrefix.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_pcrefix.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_pcrefix.c


objs/addon/src/ngx_stream_lua_uthread.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_uthread.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_uthread.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_uthread.c


objs/addon/src/ngx_stream_lua_coroutine.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_coroutine.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_coroutine.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_coroutine.c


objs/addon/src/ngx_stream_lua_output.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_output.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_output.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_output.c


objs/addon/src/ngx_stream_lua_consts.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_consts.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_consts.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_consts.c


objs/addon/src/ngx_stream_lua_log.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_log.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_log.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_log.c


objs/addon/src/ngx_stream_lua_time.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_time.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_time.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_time.c


objs/addon/src/ngx_stream_lua_string.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_string.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_string.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_string.c


objs/addon/src/ngx_stream_lua_control.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_control.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_control.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_control.c


objs/addon/src/ngx_stream_lua_sleep.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_sleep.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_sleep.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_sleep.c


objs/addon/src/ngx_stream_lua_phase.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_phase.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_phase.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_phase.c


objs/addon/src/ngx_stream_lua_ctx.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ctx.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_ctx.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ctx.c


objs/addon/src/ngx_stream_lua_regex.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_regex.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_regex.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_regex.c


objs/addon/src/ngx_stream_lua_script.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_script.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_script.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_script.c


objs/addon/src/ngx_stream_lua_shdict.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_shdict.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_shdict.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_shdict.c


objs/addon/src/ngx_stream_lua_variable.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_variable.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_variable.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_variable.c


objs/addon/src/ngx_stream_lua_timer.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_timer.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_timer.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_timer.c


objs/addon/src/ngx_stream_lua_config.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_config.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_config.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_config.c


objs/addon/src/ngx_stream_lua_worker.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_worker.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_worker.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_worker.c


objs/addon/src/ngx_stream_lua_misc.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_misc.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_misc.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_misc.c


objs/addon/src/ngx_stream_lua_initby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_initby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initby.c


objs/addon/src/ngx_stream_lua_initworkerby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initworkerby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_initworkerby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_initworkerby.c


objs/addon/src/ngx_stream_lua_socket_tcp.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_tcp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_socket_tcp.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_tcp.c


objs/addon/src/ngx_stream_lua_socket_udp.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_udp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_socket_udp.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_socket_udp.c


objs/addon/src/ngx_stream_lua_args.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_args.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_args.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_args.c


objs/addon/src/ngx_stream_lua_ssl.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ssl.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_ssl.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_ssl.c


objs/addon/src/ngx_stream_lua_balancer.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_balancer.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_balancer.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_balancer.c


objs/addon/src/ngx_stream_lua_logby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_logby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_logby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_logby.c


objs/addon/src/ngx_stream_lua_prereadby.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_prereadby.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_lua_prereadby.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/stream-lua-nginx-module/src/ngx_stream_lua_prereadby.c


objs/addon/src/ngx_http_srcache_filter_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_filter_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_filter_module.c


objs/addon/src/ngx_http_srcache_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_util.c


objs/addon/src/ngx_http_srcache_var.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_var.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_var.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_var.c


objs/addon/src/ngx_http_srcache_store.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_store.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_store.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_store.c


objs/addon/src/ngx_http_srcache_fetch.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_fetch.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_fetch.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_fetch.c


objs/addon/src/ngx_http_srcache_headers.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_headers.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_srcache_headers.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/srcache-nginx-module/src/ngx_http_srcache_headers.c


objs/addon/src/ngx_http_xss_filter_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_xss_filter_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_filter_module.c


objs/addon/src/ngx_http_xss_util.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_xss_util.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/xss-nginx-module/src/ngx_http_xss_util.c


objs/addon/src/ngx_http_stream_server_traffic_status_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_module.c


objs/addon/src/ngx_http_stream_server_traffic_status_string.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_string.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_string.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_string.c


objs/addon/src/ngx_http_stream_server_traffic_status_shm.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_shm.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_shm.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_shm.c


objs/addon/src/ngx_http_stream_server_traffic_status_node.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_node.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_node.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_node.c


objs/addon/src/ngx_http_stream_server_traffic_status_filter.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_filter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_filter.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_filter.c


objs/addon/src/ngx_http_stream_server_traffic_status_control.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_control.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_control.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_control.c


objs/addon/src/ngx_http_stream_server_traffic_status_display.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_display.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_stream_server_traffic_status_display.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sts/src/ngx_http_stream_server_traffic_status_display.c


objs/addon/src/ngx_http_vhost_traffic_status_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_module.c


objs/addon/src/ngx_http_vhost_traffic_status_variables.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_variables.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_variables.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_variables.c


objs/addon/src/ngx_http_vhost_traffic_status_string.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_string.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_string.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_string.c


objs/addon/src/ngx_http_vhost_traffic_status_shm.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_shm.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_shm.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_shm.c


objs/addon/src/ngx_http_vhost_traffic_status_node.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_node.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_node.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_node.c


objs/addon/src/ngx_http_vhost_traffic_status_filter.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_filter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_filter.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_filter.c


objs/addon/src/ngx_http_vhost_traffic_status_control.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_control.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_control.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_control.c


objs/addon/src/ngx_http_vhost_traffic_status_limit.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_limit.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_limit.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_limit.c


objs/addon/src/ngx_http_vhost_traffic_status_display.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_display.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_display.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_display.c


objs/addon/src/ngx_http_vhost_traffic_status_set.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_set.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_set.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_set.c


objs/addon/src/ngx_http_vhost_traffic_status_dump.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_dump.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_vhost_traffic_status_dump.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-vts/src/ngx_http_vhost_traffic_status_dump.c


objs/addon/src/ngx_stream_server_traffic_status_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_module.c


objs/addon/src/ngx_stream_server_traffic_status_string.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_string.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_string.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_string.c


objs/addon/src/ngx_stream_server_traffic_status_shm.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_shm.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_shm.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_shm.c


objs/addon/src/ngx_stream_server_traffic_status_node.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_node.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_node.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_node.c


objs/addon/src/ngx_stream_server_traffic_status_filter.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_filter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_filter.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_filter.c


objs/addon/src/ngx_stream_server_traffic_status_limit.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_limit.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_limit.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_limit.c


objs/addon/src/ngx_stream_server_traffic_status_variables.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_variables.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_server_traffic_status_variables.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-stream-sts/src/ngx_stream_server_traffic_status_variables.c


objs/addon/src/ngx_http_sysguard_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_sysguard_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_module.c


objs/addon/src/ngx_http_sysguard_sysinfo.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_sysinfo.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_sysguard_sysinfo.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_sysinfo.c


objs/addon/src/ngx_http_sysguard_node.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_node.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_sysguard_node.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_node.c


objs/addon/src/ngx_http_sysguard_variables.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_variables.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_sysguard_variables.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-module-sysguard/src/ngx_http_sysguard_variables.c


objs/addon/src/ngx_http_form_input_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/form-input-nginx-module/src/ngx_http_form_input_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_form_input_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/form-input-nginx-module/src/ngx_http_form_input_module.c


objs/addon/src/ngx_http_iconv_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/iconv-nginx-module/src/ngx_http_iconv_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_iconv_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/iconv-nginx-module/src/ngx_http_iconv_module.c


objs/addon/naxsi_src/naxsi_runtime.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_runtime.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_runtime.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_runtime.c


objs/addon/naxsi_src/naxsi_config.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_config.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_config.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_config.c


objs/addon/naxsi_src/naxsi_utils.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_utils.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_utils.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_utils.c


objs/addon/naxsi_src/naxsi_skeleton.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_skeleton.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_skeleton.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_skeleton.c


objs/addon/naxsi_src/naxsi_json.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_json.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_json.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_json.c


objs/addon/naxsi_src/naxsi_raw.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_raw.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/naxsi_src/naxsi_raw.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/naxsi_raw.c


objs/addon/libinjection/libinjection_sqli.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_sqli.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/libinjection/libinjection_sqli.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_sqli.c


objs/addon/libinjection/libinjection_xss.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_xss.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/libinjection/libinjection_xss.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_xss.c


objs/addon/libinjection/libinjection_html5.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_html5.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/libinjection/libinjection_html5.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/naxsi/naxsi_src/ext/libinjection/libinjection_html5.c


objs/addon/nginx/ngx_http_js_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/ngx_http_js_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx/ngx_http_js_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/ngx_http_js_module.c


objs/addon/nginx/ngx_stream_js_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/ngx_stream_js_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx/ngx_stream_js_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/ngx_stream_js_module.c


objs/addon/nginx-http-auth-digest/ngx_http_auth_digest_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-auth-digest/ngx_http_auth_digest_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx-http-auth-digest/ngx_http_auth_digest_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-auth-digest/ngx_http_auth_digest_module.c


objs/addon/nginx-http-concat/ngx_http_concat_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-concat/ngx_http_concat_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx-http-concat/ngx_http_concat_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-http-concat/ngx_http_concat_module.c


objs/addon/ngx_cache_purge/ngx_cache_purge_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/ngx_cache_purge/ngx_cache_purge_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/ngx_cache_purge/ngx_cache_purge_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/ngx_cache_purge/ngx_cache_purge_module.c


objs/addon/src/ngx_coolkit_handlers.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_handlers.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_coolkit_handlers.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_handlers.c


objs/addon/src/ngx_coolkit_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_coolkit_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_module.c


objs/addon/src/ngx_coolkit_variables.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_variables.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_coolkit_variables.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/ngx_coolkit/src/ngx_coolkit_variables.c


objs/addon/src/ngx_http_push_stream_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/src/ngx_http_push_stream_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_push_stream_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-push-stream-module/src/ngx_http_push_stream_module.c


objs/addon/nginx-upload-module/ngx_http_upload_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upload-module/ngx_http_upload_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx-upload-module/ngx_http_upload_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upload-module/ngx_http_upload_module.c


objs/addon/src/ngx_stream_upsync_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_upsync_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_upsync_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_upsync_module.c


objs/addon/src/ngx_stream_json.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_json.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_json.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_json.c


objs/addon/src/ngx_stream_http_parser.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_http_parser.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_stream_http_parser.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-stream-upsync-module/src/ngx_stream_http_parser.c


objs/addon/src/ngx_http_upsync_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_upsync_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_upsync_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_upsync_module.c


objs/addon/src/ngx_http_json.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_json.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_json.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_json.c


objs/addon/src/ngx_http_parser.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_parser.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_parser.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/nginx-upsync-module/src/ngx_http_parser.c


/root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/../build/libnjs.a:
	cd /root/rpmbuild/BUILD/nginx-1.14.0/njs/nginx/.. \
	&& if [ -f nxt/Makefile.conf ]; then $(MAKE) clean; fi \
	&& CFLAGS="$(CFLAGS)" CC="$(CC)" ./configure \
	&& $(MAKE)


modules:	objs/ngx_ssl_engine_qat_module.so

objs/ngx_ssl_engine_qat_module.so:	objs/addon/nginx_qat_module/ngx_ssl_engine_qat_module.o \
	objs/ngx_ssl_engine_qat_module_modules.o

	$(LINK) -o objs/ngx_ssl_engine_qat_module.so \
	objs/addon/nginx_qat_module/ngx_ssl_engine_qat_module.o \
	objs/ngx_ssl_engine_qat_module_modules.o \
	-Wl,-rpath=/usr/local/ssl/lib -L/usr/local/ssl/lib \
	-shared


objs/ngx_ssl_engine_qat_module_modules.o:	$(CORE_DEPS) \
	objs/ngx_ssl_engine_qat_module_modules.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/ngx_ssl_engine_qat_module_modules.o \
		objs/ngx_ssl_engine_qat_module_modules.c


objs/addon/nginx_qat_module/ngx_ssl_engine_qat_module.o:	$(ADDON_DEPS) \
	/root/rpmbuild/BUILD/nginx-1.14.0/asynch_mode_nginx/modules/nginx_qat_module/ngx_ssl_engine_qat_module.c
	$(CC) -c -fPIC $(CFLAGS) $(ALL_INCS) \
		-o objs/addon/nginx_qat_module/ngx_ssl_engine_qat_module.o \
		/root/rpmbuild/BUILD/nginx-1.14.0/asynch_mode_nginx/modules/nginx_qat_module/ngx_ssl_engine_qat_module.c


/root/rpmbuild/openssl-1.1.0f/.openssl/include/openssl/ssl.h:	objs/Makefile
	cd /root/rpmbuild/openssl-1.1.0f \
	&& if [ -f Makefile ]; then $(MAKE) clean; fi \
	&& ./config --prefix=/root/rpmbuild/openssl-1.1.0f/.openssl no-shared no-threads  \
	&& $(MAKE) \
	&& $(MAKE) install_sw LIBDIR=lib


manpage:	objs/nginx.8

objs/nginx.8:	man/nginx.8 objs/ngx_auto_config.h
	sed -e "s|%%PREFIX%%|/usr/local/nginx|" \
		-e "s|%%PID_PATH%%|/var/run/nginx.pid|" \
		-e "s|%%CONF_PATH%%|/usr/local/nginx/conf/nginx.conf|" \
		-e "s|%%ERROR_LOG_PATH%%|/usr/local/nginx/logs/error.log|" \
		< man/nginx.8 > $@

install:	build 
	test -d '$(DESTDIR)/usr/local/nginx' || mkdir -p '$(DESTDIR)/usr/local/nginx'

	test -d '$(DESTDIR)/usr/local/nginx/sbin' \
		|| mkdir -p '$(DESTDIR)/usr/local/nginx/sbin'
	test ! -f '$(DESTDIR)/usr/local/nginx/sbin/nginx' \
		|| mv '$(DESTDIR)/usr/local/nginx/sbin/nginx' \
			'$(DESTDIR)/usr/local/nginx/sbin/nginx.old'
	cp objs/nginx '$(DESTDIR)/usr/local/nginx/sbin/nginx'

	test -d '$(DESTDIR)/usr/local/nginx/conf' \
		|| mkdir -p '$(DESTDIR)/usr/local/nginx/conf'

	cp conf/koi-win '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/koi-utf '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/win-utf '$(DESTDIR)/usr/local/nginx/conf'

	test -f '$(DESTDIR)/usr/local/nginx/conf/mime.types' \
		|| cp conf/mime.types '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/mime.types '$(DESTDIR)/usr/local/nginx/conf/mime.types.default'

	test -f '$(DESTDIR)/usr/local/nginx/conf/fastcgi_params' \
		|| cp conf/fastcgi_params '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/fastcgi_params \
		'$(DESTDIR)/usr/local/nginx/conf/fastcgi_params.default'

	test -f '$(DESTDIR)/usr/local/nginx/conf/fastcgi.conf' \
		|| cp conf/fastcgi.conf '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/fastcgi.conf '$(DESTDIR)/usr/local/nginx/conf/fastcgi.conf.default'

	test -f '$(DESTDIR)/usr/local/nginx/conf/uwsgi_params' \
		|| cp conf/uwsgi_params '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/uwsgi_params \
		'$(DESTDIR)/usr/local/nginx/conf/uwsgi_params.default'

	test -f '$(DESTDIR)/usr/local/nginx/conf/scgi_params' \
		|| cp conf/scgi_params '$(DESTDIR)/usr/local/nginx/conf'
	cp conf/scgi_params \
		'$(DESTDIR)/usr/local/nginx/conf/scgi_params.default'

	test -f '$(DESTDIR)/usr/local/nginx/conf/nginx.conf' \
		|| cp conf/nginx.conf '$(DESTDIR)/usr/local/nginx/conf/nginx.conf'
	cp conf/nginx.conf '$(DESTDIR)/usr/local/nginx/conf/nginx.conf.default'

	test -d '$(DESTDIR)/var/run' \
		|| mkdir -p '$(DESTDIR)/var/run'

	test -d '$(DESTDIR)/usr/local/nginx/logs' \
		|| mkdir -p '$(DESTDIR)/usr/local/nginx/logs'

	test -d '$(DESTDIR)/usr/local/nginx/html' \
		|| cp -R html '$(DESTDIR)/usr/local/nginx'

	test -d '$(DESTDIR)/usr/local/nginx/logs' \
		|| mkdir -p '$(DESTDIR)/usr/local/nginx/logs'

	test -d '$(DESTDIR)/usr/local/nginx/modules' \
		|| mkdir -p '$(DESTDIR)/usr/local/nginx/modules'

	test ! -f '$(DESTDIR)/usr/local/nginx/modules/ngx_ssl_engine_qat_module.so' \
		|| mv '$(DESTDIR)/usr/local/nginx/modules/ngx_ssl_engine_qat_module.so' \
			'$(DESTDIR)/usr/local/nginx/modules/ngx_ssl_engine_qat_module.so.old'
	cp objs/ngx_ssl_engine_qat_module.so '$(DESTDIR)/usr/local/nginx/modules/ngx_ssl_engine_qat_module.so'
