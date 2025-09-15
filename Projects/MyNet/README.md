# MyNet Custom Protocol Project

## Overview

This project demonstrates a custom network protocol implementation using C++ for the core logic and C# for application integration. The protocol supports packet encoding/decoding, interop via a DLL, and basic networking between a C++ server and a C# client.
## Key Features
## Features
- Structured packet format with type, length, and payload fields
- Robust encoding and decoding routines in C++
- Protocol logic exported via a C++ DLL (`protocol.dll`) for C# interoperability
- C# application leverages DllImport for direct protocol function calls
- TCP server and client implementations in C++
- C# client transmits packets to the C++ server through DLL interop
- Comprehensive error handling for protocol and network operations
- Error handling for encoding, decoding, and network operations

## Project Structure
- `CppCore/`  
  - `protocol.h`, `protocol.cpp`: Protocol logic and DLL exports  
  - `socket_utils.h`, `socket_utils.cpp`: Socket utilities  
  - `server.cpp`, `client.cpp`: TCP server and client implementations
- `DotNET_App/`  
  - `Program.cs`: Main C# application  
  - `NativeInterop.cs`: DllImport declarations for protocol DLL  
  - `DotNET_App.csproj`: C# project file

## How It Works

1. The C++ server is started and listens for incoming TCP connections.
2. The C# application encodes a packet using the protocol DLL and sends it to the server.
3. The server receives the packet, decodes it, and displays the payload.
4. All protocol logic (encode, decode, send) is implemented in C++ and exposed to C# via DLL exports.

## Build & Run Instructions

### C++ Core
- Build the server and client using MSVC:
  ```
  cl /EHsc server.cpp socket_utils.cpp protocol.cpp ws2_32.lib
  cl /EHsc client.cpp socket_utils.cpp protocol.cpp ws2_32.lib
- Build the DLL using CMake or MSVC as appropriate.

### C# Application
- Build and run the C# app:
  ```
  dotnet build
  dotnet run
  ```

### Networking Test
- Observe the server console for received payload

## Notes
- For advanced packet visualization, use log files or external tools.
