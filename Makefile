CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = grammaire
SRCS = main.cpp lexer.cpp symbole.cpp

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
