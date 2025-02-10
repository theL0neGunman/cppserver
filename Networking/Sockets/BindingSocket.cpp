#include "BindingSocket.hpp"

// Constructor
HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, 
int port, u_long interfce):SimpleSocket(domain, service, 
protocol, port, interfce){
    set_conn(con_to_network(get_soc(), get_address()));
    test_conn(get_conn());
}


// Definition of connect to network virtual function
int HDE ::BindingSocket::con_to_network(int soc, struct sockaddr_in address)
{
    return bind(soc, (struct sockaddr *)&address, sizeof(address));
}