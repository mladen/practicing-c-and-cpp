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

# Find and link against necessary libraries
find_package(glfw3 REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)
