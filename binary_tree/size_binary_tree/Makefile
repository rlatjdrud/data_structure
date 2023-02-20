CC = g++
CXXFLAGS = -Wall -g
TARGET = main
OBJ = main.o

all:$(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)
