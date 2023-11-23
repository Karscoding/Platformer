cmake_minimum_required(VERSION 3.22)
project(PROJECT_NAME)

set(CMAKE_CXX_STANDARD 14)

# Must set the path to the main.cpp, for example: src/main.cpp if it is inside a folder
add_executable(${PROJECT_NAME}
        src/utility/vector2.cpp
        src/utility/color.cpp
        src/utility/object.cpp
        src/utility/collider.cpp
        src/eventhandle.cpp
        src/inputhandle.cpp
        src/debug.cpp
        src/player.cpp
        src/renderer.cpp
        src/main.cpp
        src/utility/physicsBody.cpp
        src/ground.cpp)

# --- SDL2 SETUP ---
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(SDL2_PATH "SDL2/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})