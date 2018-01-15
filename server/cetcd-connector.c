#include "cetcd-connector.h"

int etcd_get(char* dir, cetcd_client cli) {

    cetcd_response *resp;
    resp = cetcd_get(&cli, "/");
    cetcd_response_print(resp);

    if(resp->err) {
	return -1;
    }
}

int etcd_data_parse(struct nc_session *ncs) {
	
	
}

cetcd_client* init_etcd_connection() {
	 
    cetcd_array addrs;
    cetcd_client cli;

    cetcd_array_init(&addrs, 3);
    cetcd_array_append(&addrs, "http://etcd0:2379");

    cetcd_client_init(&cli, &addrs);

    etcd_get("/", cli);
    return &cli;
}

