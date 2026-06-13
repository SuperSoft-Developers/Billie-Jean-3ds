#include "NetworkClient.h"

#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

bool NetworkClient::Connect(const std::string& host, int port) {
    socketFd = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);

    inet_pton(AF_INET, host.c_str(), &addr.sin_addr);

    return connect(socketFd,
                  (sockaddr*)&addr,
                  sizeof(addr)) == 0;
}

void NetworkClient::Send(const std::string& data) {
    if (socketFd >= 0)
        send(socketFd, data.c_str(), data.size(), 0);
}

void NetworkClient::Disconnect() {
    if (socketFd >= 0) {
        close(socketFd);
        socketFd = -1;
    }
}
