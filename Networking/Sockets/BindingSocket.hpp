#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket: public SimpleSocket
    {
    // make it a public inheritance relationship
    // it is a constructor
        public:
            BindingSocket(int domain,int service, 
                 int protocol, int port, u_long interfce);
                //  it is a virual function from parent
            int con_to_network(int soc, struct sockaddr_in address);
    };
}



#endif /*Binding socket_hpp*/