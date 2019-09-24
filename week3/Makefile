.SUFFIXES: .cpp .o

OBJECTS = 2-1.o

CXX = g++
CPPFLAGS=-c

TARGET = test

$(TARGET) : $(OBJECTS) 
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)
2-1.o : 2-1.cpp
