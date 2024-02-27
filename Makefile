
CC = gcc
CXXFLAGS = -Wall -03

LDFLAGS = -pthread -lm

TARGET = main

all: $(TARGET)

$(TARGET): main.o temp.o
		$(CC) -o $@ $^ $(LDFLAGS)

$(TARGET):	temp.h

clean:
		rm -f *.o *~

cleanall:	clean
		rm -f $(TARGET)
