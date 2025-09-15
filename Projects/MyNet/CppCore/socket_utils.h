// socket_utils.h
// Socket utility function declarations

#ifndef SOCKET_UTILS_H
#define SOCKET_UTILS_H

#include <WinSock2.h>
#include <vector>
#include <cstdint>

bool initSocket();
void cleanupSocket();
SOCKET createServerSocket(int port);
SOCKET createClientSocket(const char* ip, int port);
bool sendData(SOCKET sock, const std::vector<uint8_t>& data);
bool recvData(SOCKET sock, std::vector<uint8_t>& data);

#endif // SOCKET_UTILS_H
