#pragma once

#include <string>

class NetworkClient {
public:
    bool Connect(const std::string& host, int port);
    void Send(const std::string& data);
    void Disconnect();

private:
    int socketFd = -1;
};
