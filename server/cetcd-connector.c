#include "libraries/cetcd/cetcd.h"

void init_etcd_connection(cetcd_array* resp) {
    cetcd_array addrs;
    cetcd_array_init(&addrs, 3);
    cetcd_array_append(&addrs, "http://etcd0:2379");
}

void etcd_data_parse(struct nc_pollsession *ps) {
    
}
