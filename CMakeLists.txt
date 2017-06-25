cmake_minimum_required(VERSION 3.7)
project(AES)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c AES/aes.c AES/aes.h AES/util.c AES/util.h AES/key.c AES/key.h AES/common.c AES/common.h)
add_executable(AES ${SOURCE_FILES})