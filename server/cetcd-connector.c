#include "libraries/cetcd/cetcd.h"
#include "libraries/cetcd/cetcd_array.h"

void init_etcd_connection(cetcd_array* resp) {
    cetcd_array addrs;

    cetcd_array_init(&addrs, 3);
    cetcd_array_append(&addrs, "http://etcd0:2379");

    cetcd_client cli;
    cetcd_client_init(&cli, &addrs);

    resp = cetcd_get(&cli, "/");


}


void etcd_data_parse(struct nc_pollsession *ps) {
    
}
