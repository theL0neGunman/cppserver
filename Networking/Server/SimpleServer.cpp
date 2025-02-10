#include "SimpleServer.hpp"


HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interfce, int bklog)
{
    delete socket;
    socket = new ListeningSoc(domain, service, protocol, port , interfce, bklog);
}



HDE::ListeningSoc * HDE::SimpleServer::get_soc()
{
    return socket;
}