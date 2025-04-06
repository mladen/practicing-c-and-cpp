## Compilation

### Using CMake

NOTE: CMake is a build system builder for C and C++

```bash
cmake .     # Creates Makefile
make        # Executes Makefile
./circle    # Executes compiled file
```

## Cleaning

Even though we didn't create an entry, for cleaning, in CMakeLists.txt, we can still use `make clean` because CMake has created the entry for us in the Makefile.