cmake_minimum_required(VERSION 3.16)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

add_executable(Snake src/main.cpp src/Engine.cpp headers/Engine.hpp src/Draw.cpp src/Input.cpp headers/SnakeSection.h src/SnakeSection.cpp src/update.cpp)

include_directories(headers c:/Tools/SFML/include)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Snake ${SFML_LIBRARIES})
endif()

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

# Copy dlls to build directory
if(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()