cmake_minimum_required(VERSION 3.25)
project(sem3)

set(CMAKE_CXX_STANDARD 17)

find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
find_package(OpenGL REQUIRED)

add_subdirectory(prj.codeforces)
add_subdirectory(prj.cw)
