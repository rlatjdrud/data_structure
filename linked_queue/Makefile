CC=g++
CXXFLAGS= -Wall -g
LDFLAGS = 
INCLUDE = -Iinclude/
SRC_DIR = ./src
OBJ_DIR = ./obj
TARGET = main
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.cc))
OBJS = $(SRCS:.cc=.o)
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))



$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(CC) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET) : $(OBJECTS)
	$(CC) $(CXXFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

.PHONY : clean all
clean:
	rm -f  $(OBJECTS) $(TARGET)
