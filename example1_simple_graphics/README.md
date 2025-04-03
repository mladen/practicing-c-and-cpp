## Installation of needed libraries

```bash
# sudo apt-get install libglu1-mesa-dev freeglut3-dev
sudo apt-get install freeglut3-dev
```

## Compilation

### Using CMake

> NOTE: This project will not be compiled using CMake. Go to the [example2_simple_opengl](../example2_simple_opengl) project to check out a project which uses CMake for compilation

### Using 'make' (prefferred - on this project and smaller projects in general)

```bash
make # or 'make circle' or 'make all'
```

> NOTE: To see all options check out the file ./Makefile

### Manual compilation
```bash
gcc -o circle circle.c -lGL -lGLU -lglut -lm # for C
# g++ -o circle circle.cpp -lGL -lGLU -lglut -lm # for C++
```

## Cleaning

Removes the compiled files

### Using 'make'

```bash
make clean
```

## Execution

```cpp
./circle
```