#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(void)
{
    int serv_sock, clnt_sock;
    sockaddr_in clnt_addr, serv_addr;

    if ((serv_sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        std::cout << "Socket Error\n";
        return 1;
    }

    std::cout << "Create Socket\n";

    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(4000);

    if (bind(serv_sock, reinterpret_cast<struct sockaddr *>(&serv_addr), sizeof(serv_addr)) == -1)
    {
        std::cout << "Bind Error\n";
        return 1;
    }

    std::cout << "Bind\n";

    if (listen(serv_sock, 5) == -1)
    {
        std::cout << "Listen Error\n";
        return 1;
    }

    std::cout << "Listen\n";
   
    socklen_t clnt_addr_len = sizeof(clnt_addr);

    if ((clnt_sock = accept(serv_sock, reinterpret_cast<struct sockaddr *>(&clnt_addr), &clnt_addr_len)) == -1)
    {
        std::cout << "Accept Error\n";
        return 1;
    }

    std::cout << "accept\n";

    char str[] = "Hello World\n";
    write(clnt_sock, str, sizeof(str));

    close(clnt_sock);
    close(serv_sock);

    return 0;
}