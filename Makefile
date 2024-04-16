CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra

SRCS = cartesian_product.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = cartesian_product

.PHONY: all
all: run

.PHONY: run
run: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)
	./$(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
