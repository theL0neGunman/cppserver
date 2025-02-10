#ifndef TestServer_hpp
#define TestServer_hpp

#include "SimpleServer.hpp"


#include <stdio.h>
#include <io.h>

namespace HDE
{
    class TestServer: public SimpleServer
    {
        private:
            char buffer[30000] = {0};
            int new_socket;
            void accept_socket();
            void handler();
            void responder();
        public:
            TestServer();
            void launch();
    }; 
}


#endif