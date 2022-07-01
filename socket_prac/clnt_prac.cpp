#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(int argc, char* argv[])
{
    int clnt_sock;
    sockaddr_in serv_addr;
    char str[1024] = {0};

    if ((clnt_sock = socket(PF_INET, SOCK_STREAM, 0)) == -1)
    {
        std::cout << "Socket Error(clnt)\n";
        return 1;
    }

    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(4000);

    if (connect(clnt_sock, reinterpret_cast<struct sockaddr*>(&serv_addr), sizeof(serv_addr)) == -1)
    {
        std::cout << "Connect Error(clnt)\n";
        return 1;        
    }

    if (read(clnt_sock, str, sizeof(str) - 1) == -1)
    {
        std::cout << "READ ERROR\n";
        return 1;
    }

    std::cout << "Message from srver : " << str << "\n";

    close(clnt_sock);

    return 0;
}