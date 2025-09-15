#include "socket_utils.h"
#include <iostream>

bool initSocket() {
    WSADATA wsa;
    return WSAStartup(MAKEWORD(2,2), &wsa) == 0;
}

void cleanupSocket() {
    WSACleanup();
}

SOCKET createServerSocket(int port) {
    SOCKET server = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;
    bind(server, (sockaddr*)&addr, sizeof(addr));
    listen(server, 1);
    return server;
}

SOCKET createClientSocket(const char* ip, int port) {
    SOCKET client = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(ip);
    connect(client, (sockaddr*)&addr, sizeof(addr));
    return client;
}

bool sendData(SOCKET sock, const std::vector<uint8_t>& data) {
    int sent = send(sock, reinterpret_cast<const char*>(data.data()), (int)data.size(), 0);
    return sent == (int)data.size();
}

bool recvData(SOCKET sock, std::vector<uint8_t>& data) {
    char buffer[4096];
    int received = recv(sock, buffer, sizeof(buffer), 0);
    if (received <= 0) return false;
    data.assign(buffer, buffer + received);
    return true;
}
