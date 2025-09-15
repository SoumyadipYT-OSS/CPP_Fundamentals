#include "protocol.h"
#include "socket_utils.h"
#include <cstring>

std::vector<uint8_t> encodePacket(const Packet& pkt) {
    std::vector<uint8_t> data;
    // type (2 bytes)
    data.push_back(pkt.type & 0xFF);
    data.push_back((pkt.type >> 8) & 0xFF);
    // length (4 bytes)
    data.push_back(pkt.length & 0xFF);
    data.push_back((pkt.length >> 8) & 0xFF);
    data.push_back((pkt.length >> 16) & 0xFF);
    data.push_back((pkt.length >> 24) & 0xFF);
    // payload
    data.insert(data.end(), pkt.payload.begin(), pkt.payload.end());
    return data;
}

bool decodePacket(const std::vector<uint8_t>& data, Packet& pkt) {
    if (data.size() < 6) return false;
    pkt.type = data[0] | (data[1] << 8);
    pkt.length = data[2] | (data[3] << 8) | (data[4] << 16) | (data[5] << 24);
    if (data.size() < 6 + pkt.length) return false;
    pkt.payload = std::vector<uint8_t>(data.begin() + 6, data.begin() + 6 + pkt.length);
    return true;
}
// Packet validation function
bool validatePacket(const Packet& pkt) {
    // Type 0 invalid, length mismatch
    if (pkt.type == 0) return false;
    if (pkt.length != pkt.payload.size()) return false;
    return true;
}

// Packet creation function
Packet makePacket(uint16_t type, const std::vector<uint8_t>& payload) {
    Packet pkt;
    pkt.type = type;
    pkt.length = static_cast<uint32_t>(payload.size());
    pkt.payload = payload;
    return pkt;
}


// Exported function for C# interop
extern "C" {
    __declspec(dllexport) int encode_packet(const uint8_t* payload, int length, uint8_t* outBuffer, int outBufferSize) {
        if (!payload || length <= 0 || !outBuffer || outBufferSize <= 0) return -1;
        std::vector<uint8_t> pl(payload, payload + length);
        Packet pkt = makePacket(1, pl); // type 1 for example
        std::vector<uint8_t> encoded = encodePacket(pkt);
        if ((int)encoded.size() > outBufferSize) return -2;
        memcpy(outBuffer, encoded.data(), encoded.size());
        return (int)encoded.size();
    }
    __declspec(dllexport) int decode_packet(const uint8_t* data, int length, uint8_t* outPayload, int outPayloadSize) {
        if (!data || length < 6 || !outPayload || outPayloadSize <= 0) return -1;
        std::vector<uint8_t> encoded(data, data + length);
        Packet pkt;
        if (!decodePacket(encoded, pkt)) return -2;
        if ((int)pkt.payload.size() > outPayloadSize) return -3;
        memcpy(outPayload, pkt.payload.data(), pkt.payload.size());
        return (int)pkt.payload.size();
    }
    __declspec(dllexport) int send_packet(const char* ip, int port, const uint8_t* payload, int length) {
        if (!ip || !payload || length <= 0) return -1;
        if (!initSocket()) return -2;
        SOCKET sock = createClientSocket(ip, port);
        if (sock == INVALID_SOCKET) return -3;
        std::vector<uint8_t> data(payload, payload + length);
        bool success = sendData(sock, data);
        closesocket(sock);
        cleanupSocket();
        return success ? length : -4;
    }
}
