add_library(volrender main.cpp)
set_property(TARGET volrender PROPERTY CXX_STANDARD 17)
target_link_libraries(volrender
        OpenGL::GL
        GLUT::GLUT
        GLEW::GLEW
)

install(TARGETS volrender)

