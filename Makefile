CC=g++
CFLAGS=-W -Wall
TARGET = main
OBJECT = main.o

$(TARGET) : $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean
	rm -f *.o main
