
#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp 
#include <stdio.h>

#include "SimpleSocket.hpp"


namespace HDE
{
    class ConnectingSocket:public SimpleSocket
    {
        public:
            ConnectingSocket(int domain, int service,
            int protocol,
            int port, u_long interfce);
            int con_to_network(int soc, struct sockaddr_in address);
    };
}



#endif /*Connecting Socket_hpp*/