# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = cartesian_product

# Build rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
