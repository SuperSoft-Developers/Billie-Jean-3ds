cmake_minimum_required(VERSION 3.16)

project(BillieJeanMac)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_DEPLOYMENT_TARGET "11.0")

find_package(SDL2 REQUIRED)

add_executable(BillieJeanMac
    src/main.cpp
)

target_link_libraries(BillieJeanMac SDL2::SDL2)
