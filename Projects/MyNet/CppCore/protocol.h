// protocol.h
// Custom packet structure and protocol function declaration

#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <vector>
#include <cstdint>
#include <string>

struct Packet {
    uint16_t type;        // Packet type
    uint32_t length;      // Payload length
    std::vector<uint8_t> payload; // Actual data
};

Packet makePacket(uint16_t type, const std::vector<uint8_t>& payload);

// Encode a Packet to raw bytes
std::vector<uint8_t> encodePacket(const Packet& pkt);

// Decode raw bytes to a Packet
bool decodePacket(const std::vector<uint8_t>& data, Packet& pkt);

// Exported function for C# interop
extern "C" __declspec(dllexport) int encode_packet(const uint8_t* payload, int length, uint8_t* outBuffer, int outBufferSize);
extern "C" __declspec(dllexport) int decode_packet(const uint8_t* data, int length, uint8_t* outPayload, int outPayloadSize);
extern "C" __declspec(dllexport) int send_packet(const char* ip, int port, const uint8_t* payload, int length);

#endif // PROTOCOL_H
