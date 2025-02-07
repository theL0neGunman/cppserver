#ifndef SimpleSocket.hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <iostream>


#pragma comment(lib, "ws2_32.lib")

namespace HDE{
    class SimpleSocket{
        private:
        struct sockaddr_in address;
        int soc;
        int connection;
        public:
        // Constructor
            SimpleSocket(int domain,int service,
             int protocol, int port, u_long interfce);
            // Virtual function to connect to network
            virtual int con_to_network(int soc, struct socaddr_in address) = 0;
            // function to test sockets and connections
            void test_conn(int);
            struct sockaddr_in get_address();
            int get_soc();
            int get_conn();
            //setter functions
            void set_conn(int);

    };
}



#endif