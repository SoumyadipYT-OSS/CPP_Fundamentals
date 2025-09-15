#include "socket_utils.h"
#include "protocol.h"
#include <iostream>

int main() {
    initSocket();
    SOCKET sock = createClientSocket("127.0.0.1", 12345);

    std::vector<uint8_t> payload = {1,2,3,4,5};
    Packet pkt = makePacket(1, payload);
    std::vector<uint8_t> encoded = encodePacket(pkt);

    if (sendData(sock, encoded)) {
        std::cout << "Packet sent!" << std::endl;
    }
    closesocket(sock);
    cleanupSocket();
    return 0;
}