#include <stdio.h>
#include <syslog.h>

#include "libraries/cetcd/cetcd.h"
#include "libraries/cetcd/cetcd_array.h"
#include <nc_server.h>

int etcd_data_parse(struct nc_session *ncs);
cetcd_client* init_etcd_connection();
