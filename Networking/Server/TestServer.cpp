#include "TestServer.hpp"
using namespace std;



HDE::TestServer::TestServer() :SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10){
    launch();
}
void HDE::TestServer::accept_socket()
{
    struct sockaddr_in address = get_soc()->get_address();
    int address_len = sizeof(address);
    new_socket = accept(get_soc()->get_soc(),(struct sockaddr *)&address, (socklen_t *)&address_len);
    read(new_socket, buffer, 30000);

}


void HDE::TestServer::handler()
{
    cout << "Buffer" << endl;
}

void HDE::TestServer::responder()
{
    char *hello = "Hello from server";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}


void HDE::TestServer::launch(){
    while (true)
    {
        cout << "====== Waiting ======" << endl;
        accept_socket();
        handler();
        responder();
        cout << "===== Done ====" << endl;
    }
    
}