add_library(volrender main.cpp)
set_property(TARGET volrender PROPERTY CXX_STANDARD 17)
target_link_libraries(volrender
        OpenGL::GL
        GLUT::GLUT
        C:/ITSoft/vcpkg/packages/glew_x64-windows/bin/glew32.dll
)

install(TARGETS volrender)

