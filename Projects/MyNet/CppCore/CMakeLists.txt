cmake_minimum_required(VERSION 3.16)
project(MyNetProtocol)

# Output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Source and header files
set(SOURCES
    protocol.cpp
    socket_utils.cpp
)

set(HEADERS
    protocol.h
    socket_utils.h
)

# Create shared library
add_library(protocol SHARED ${SOURCES} ${HEADERS})

# Include headers
target_include_directories(protocol PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# C++ standard
target_compile_features(protocol PUBLIC cxx_std_17)

# Platform-specific settings
if(WIN32)
    target_link_libraries(protocol PRIVATE Ws2_32)
    target_compile_definitions(protocol PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

# Optional: Enable testing
# enable_testing()
# add_subdirectory(tests)

# Optional: Install rules
# install(TARGETS protocol DESTINATION lib)
# install(FILES ${HEADERS} DESTINATION include)

# Confirmation message
message(STATUS "MyNetProtocol build configured successfully.")