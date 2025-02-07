#include "ConnectingSocket.hpp"


HDE::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interfce):SimpleSocket(domain, service, protocol, port, interfce){
    set_conn(con_to_network(get_soc(), get_address()));
    test_conn(get_conn());
}


int HDE::ConnectingSocket::con_to_network(int soc, struct sockaddr_in address){
    return connect(soc, (struct sockaddr *)&address, sizeof(address));
}

 
// (struct sockaddr *)&address -- > it is type casting, convering address to struct sockaddr pointer, 
// & is the derefrencing, it takes the pointer to its actual value
// takes the value stored in address and converts it to a struct sockaddr pointer