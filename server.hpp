#include <string>
#include <vector>
#include <iostream>
#include "color.hpp"


class Server
{
    public:
        Server();
        ~Server();
        std::string get_nickname();
        int get_socket();
        int get_ip(); 
    private:
        int _socket;
        int _ip;
        std::string nickname;
};

Server::Server()
{
}

Server::~Server()
{
}

std::string Server::get_nickname()
{
    return nickname;
}

int Server::get_socket()
{
    return _socket;
}

int Server::get_ip()
{
    return _ip;
}

