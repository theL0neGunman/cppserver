
#include "ListeningSocket.hpp"

HDE::ListeningSoc::ListeningSoc(
    int domain, int service, int protocol, 
    int port, u_long interfce, int bklog
) : BindingSocket(domain, service, protocol, port, interfce){
    backlog = bklog;
    start_listening();
    test_conn(listening);
}



void HDE::ListeningSoc::start_listening(){
    listening = listen(get_soc(), backlog);
}