# Compiler to use
CC = gcc

# Compiler flags
# -Wall        enable all warning messages
# -Wextra      enable extra warnings
# -g           include debugging information
CFLAGS = -Wall -Wextra -g

# Target executable name
TARGET = circle

# Source files
SRCS = circle.c

# Linker flags
LDFLAGS = -lGL -lGLU -lglut -lm

# Default rule to build the target
all: $(TARGET)

# Rule to build the final executable
# This rule says: To build the target, we need the object files
# Then it links those object files together using the compiler and linker flags
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)


# Clean up rule - removes all generated files
# This allows you to start fresh with "make clean"
# rm -f means remove files without prompting and don't error if files don't exist
clean:
	rm -f $(TARGET) $(OBJS)