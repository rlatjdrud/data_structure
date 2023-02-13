CC=gcc
CFLAGS = -Wall -g
OBJ = main.o
TARGET= main

all:$(TARGET)

$(OBJ) : main.c
	$(CC) $(CFLAGS) -o $@ -c $^ 

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean: 
	rm -f *.o main
