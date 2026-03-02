CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = grammaire
SRCS = $(wildcard *.cpp) $(wildcard Etats/*.cpp)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
