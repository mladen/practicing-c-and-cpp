## Installation of needed libraries

```bash
# sudo apt-get install libglu1-mesa-dev freeglut3-dev
sudo apt-get install freeglut3-dev
```

## Compilation

### Using 'make' (prefferred)

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