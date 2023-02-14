CC = g++
CXXFLAGS = -Wall -g
SRC_DIR = ./src
OBJ_DIR = ./obj
INCLUDE = -Iinclude/
TARGET = main
SRCS =$(notdir $(wildcard $(SRC_DIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all : $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CC) $(CXXFLAGS) $(INCLUDE) -o $@ -c $^

$(TARGET) : $(OBJECTS)
	$(CC) $(CXXFLAGS) -o $@ $^

.PHONY : clean 
clean:
	rm $(OBJECTS) $(TARGET)


