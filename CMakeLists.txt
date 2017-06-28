cmake_minimum_required(VERSION 3.7)
project(AES)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c AES/common.c AES/common.h tests/test_common.c tests/test_common.h AES/debug.c AES/debug.h AES/common_math.c AES/common_math.h AES/common_aes.c AES/common_aes.h tests/test_key.c tests/test_key.h AES/encrypt.c AES/encrypt.h AES/key.c AES/key.h)

add_executable(AES ${SOURCE_FILES})

