cmake_minimum_required(VERSION 2.6)
project(Glock)

set(CMAKE_BUILD_TYPE Release)
set(INSTALL_LIB_DIR "/home/joseluis/.local/lib")
set(INSTALL_HEADER_DIR "/home/joseluis/.local/include/Glock")

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_library(Glock SHARED ${SOURCES})
install(TARGETS Glock DESTINATION ${INSTALL_LIB_DIR})
install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/" DESTINATION ${INSTALL_HEADER_DIR})