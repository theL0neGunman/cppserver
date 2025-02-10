#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") 


#include "TestServer.hpp"


int main(){


    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Winsock initialization failed" << std::endl;
        return 1;
    }

    HDE::TestServer t;
}