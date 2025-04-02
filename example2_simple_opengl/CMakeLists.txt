# cmake_minimum_required(VERSION 3.5.0)
# project(my_opengl_test1 VERSION 0.1.0 LANGUAGES C CXX)

# add_executable(my_opengl_test1 src/main.cpp)

# Specify the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(example2_simple_opengl)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(${PROJECT_NAME} src/main.cpp)

# Include OpenGL libraries or dependencies if needed
find_package(OpenGL REQUIRED)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)

# Find and link against necessary libraries (GLFW in this case)
# NOTE: GLFW is a modern, lightweight, cross-platform library for
# creating windows, contexts and surfaces, for OpenGL, OpenGL ES,
# and Vulkan development. It handles window creation, input
# handling, and event processing, similar to GLUT but with a more
# modern design. GLFW provides a cleaner API, better multi-monitor
# support, and has active development and maintenance.
# It's widely used in contemporary graphics programming when you
# need a simple windowing solution without the overhead of larger
# frameworks.
find_package(glfw3 REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)
