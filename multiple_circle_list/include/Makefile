CC=g++
CFLAGS = -Wall -g
OBJ = lists.o
TARGET = liblists.a

all : $(TARGET)

$(OBJ) : lists.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	ar rc $@ $^

.PHONY : clean

clean : 
	rm *.o $(TARGET)
