cmake_minimum_required(VERSION 3.19)
project(helloNX)

set(CMAKE_CXX_STANDARD 11)
# 设置头文件目录
include_directories(
        E:/NX12/UGOPEN
        E:/NX12/UGOPEN/NXOpen
        E:/NX12/UGOPENPP
        E:/NX12/NXBIN
)

add_library(helloNX SHARED main.cpp)
# 拿到.lib文件的目录
file(GLOB LIB_FILE E:/NX12/UGOPEN/*.lib)
#file(GLOB LIB_FILE E:/NX12/NXBIN/*.dll)
#message(STATUS ${LIB_FILE})
# 进行链接
target_link_libraries(helloNX ${LIB_FILE})