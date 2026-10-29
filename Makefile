# ==============================================================================
# STARTER C++ MAKEFILE
# ==============================================================================

# 1. Compiler and Flag Configurations
CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -g
TARGET   := example

# 2. Automatically detect all .cpp source files
SRCS     := $(wildcard *.cpp)

# 3. Derive object file names (.o) from source file names (.cpp)
OBJS     := $(SRCS:.cpp=.o)

# 4. Default Target (runs when you just type 'make')
.PHONY: all
all: $(TARGET)

# 5. Rule to link the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 6. Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 7. Clean up generated build files
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)