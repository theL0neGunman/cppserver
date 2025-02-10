#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>
#include "BindingSocket.hpp"


namespace HDE
{
    class ListeningSoc: public BindingSocket
    {
        private:
            int backlog;
            int listening;
        public:
            ListeningSoc(int domain, int service, int protocol, int port, u_long interfce, int bklog);
            void start_listening();
    };
}



#endif /*ListeningSocket_hpp*/