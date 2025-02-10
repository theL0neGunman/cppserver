#ifndef SimpleServer_hpp
#define SimpleServer_hpp


#include <stdio.h>
#include "../hdelibc_networking.hpp"


// define listening socket for our server

namespace HDE
{
    class SimpleServer
    {
        private:
            ListeningSoc * socket;
            virtual void accept_socket() = 0;
            virtual void handler() = 0;
            virtual void responder() = 0;
        public:
            SimpleServer(int domain, int service, int protocol, int port, u_long interfce, int bklog);
            virtual void launch() = 0; //while loop in child class to call the 3 virtual functions
            // getter to get socket variavle out
            ListeningSoc * get_soc();
    };
}

#endif