#include "SimpleSocket.hpp"


// Default constructor
HDE::SimpleSocket::SimpleSocket(int domain,int service, 
int protocol, int port, u_long interfce){
    // Defining the address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    // set them to the order of the actual network
    address.sin_addr.s_addr = htonl(interfce);
    // Establishing a connection
    soc = socket(domain, service, protocol);
    // Test the socket and establish network connection - done in the child class which user has to define
    test_conn(soc);
}

// Test connection virtual connection
void HDE::SimpleSocket::test_conn(int item_to_test){
    // Confirm that the sockect or connection has been properly established
    if(item_to_test < 0){
        perror("failed to connect");
        exit(EXIT_FAILURE);
    }
}

// Binding not necessary on every socket, its handled in server side code
// Specify whether to bind or connect


// Getter funtions
struct sockaddr_in HDE::SimpleSocket::get_address(){
    return address;
}

int HDE::SimpleSocket::get_soc(){
    return soc;
}

int HDE::SimpleSocket::get_conn(){
    return connection;
}


// setter funtions

void HDE::SimpleSocket::SimpleSocket::set_conn(int con){
    connection= con;
}