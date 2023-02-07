CC=g++
CFLAGS=-W -Wall
TARGET = profix_exe
OBJECT = profix.o

$(TARGET) : $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean:
	rm *.o main1
