cmake_minimum_required(VERSION 4.3.3)
project(lilgame VERSION 0.1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(lilgame
    src/main.cpp
    src/glad.c
)

target_include_directories(lilgame PRIVATE include)

target_link_libraries(lilgame PRIVATE
    glfw
    OpenGL::GL
    ${CMAKE_DL_LIBS}
)
