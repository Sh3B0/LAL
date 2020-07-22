cmake_minimum_required(VERSION 3.16)
project(lal)

set(CMAKE_CXX_STANDARD 11)

add_executable(lal test-client.cpp errors.h Matrix/matrix.tpp logManager.h)