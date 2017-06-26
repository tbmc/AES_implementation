cmake_minimum_required(VERSION 3.7)
project(AES)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c AES/aes.c AES/aes.h AES/util.c AES/util.h AES/key.c AES/key.h AES/common/common.c AES/common/common.h tests/test_common.c tests/test_common.h AES/common/debug.c AES/common/debug.h AES/common/common_math.c AES/common/common_math.h AES/common/common_aes.c AES/common/common_aes.h)
add_executable(AES ${SOURCE_FILES})