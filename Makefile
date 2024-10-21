# Makefile for Hash Cracking Project with OpenMP

# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -fopenmp -Wall -Wextra -O2

# Source Files
SRCS = main.cpp sha256.cpp

# Output Executable
TARGET = hash_cracker

# Default Target
all: $(TARGET)

# Linking the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean up build files
clean:
	rm -f $(TARGET)

.PHONY: all clean
