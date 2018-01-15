#include "../cetcd.h"

void init_etcd_connection( cetcd_array* resp) {
    cetcd_array_init(&addrs, 3);
    cetcd_array_append(&addrs, "http://bbctrl01.labor:2379");
}

void etcd_data_parse(struct nc_pollsession *ps) {
    
}

int main(int argc, char** argv) {
    cetcd_client cli;
    cetcd_response *resp;
    cetcd_array addrs;

    cetcd_client_init(&cli, &addrs);

    resp = cetcd_get(&cli, "/baseboxd");
    if(resp->err) {
        printf("error :%d, %s (%s)\n", resp->err->ecode, resp->err->message, resp->err->cause);
    }
    cetcd_response_print(resp);
    cetcd_response_release(resp);

    cetcd_array_destroy(&addrs);
    cetcd_client_destroy(&cli);
    return 0;
}
