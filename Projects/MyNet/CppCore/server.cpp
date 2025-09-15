#include "socket_utils.h"
#include "protocol.h"
#include <iostream>

int main() {
    initSocket();
    SOCKET server = createServerSocket(12345);
    std::cout << "Server started..." << std::endl;

    while (true) {
        SOCKET client = accept(server, NULL, NULL);
        std::vector<uint8_t> recvBuf;
        if (recvData(client, recvBuf)) {
            Packet pkt;
            if (decodePacket(recvBuf, pkt)) {
                std::cout << "Received payload: ";
                for (auto b : pkt.payload) 
                    std::cout << (int) b << " ";
                std::cout << std::endl;
            }
        }
        closesocket(client);
    }
    closesocket(server);
    cleanupSocket();
    return 0;
}
