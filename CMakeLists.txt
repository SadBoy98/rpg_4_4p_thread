cmake_minimum_required(VERSION 3.6)
project(rpg_4_4p_thread)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

file(GLOB SOURCE_FILES
  "*.cpp"
)

add_executable(rpg_4_4p_thread ${SOURCE_FILES})