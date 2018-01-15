/**
 * @file config.h
 * @author Radek Krejci <rkrejci@cesnet.cz>
 * @brief Various configuration constants for netopeer2-server
 *
 * Copyright (c) 2016 - 2017 CESNET, z.s.p.o.
 *
 * This source code is licensed under BSD 3-Clause License (the "License").
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://opensource.org/licenses/BSD-3-Clause
 */

#ifndef NP2SRV_CONFIG_H_
#define NP2SRV_CONFIG_H_

/** @brief Netopeer2 Server version */
#define NP2SRV_VERSION "0.4.16"

/** @brief Netopeer2 Server PID file path
 * The default path /var/run/netopeer2-server.pid follows
 * the Filesystem Hierarchy Standard
 */
#define NP2SRV_PIDFILE "/var/run/netopeer2-server.pid"

/** @brief Netopeer2 Server SSH default RSA host key path
 */
#define NP2SRV_HOST_KEY "/etc/ssh/ssh_host_rsa_key"

/** @brief keystored default directory
 */
#ifndef NP2SRV_KEYSTORED_DIR
#   define NP2SRV_KEYSTORED_DIR "none"
#endif

/** @brief Maximum number of threads handling session requests
 */
#ifndef NP2SRV_THREAD_COUNT
#   define NP2SRV_THREAD_COUNT 5
#endif

/** @brief availability of pthread_rwlockattr_setkind_np()
 */
/* #undef HAVE_PTHREAD_RWLOCKATTR_SETKIND_NP */

#endif /* NP2SRV_CONFIG_H_ */
