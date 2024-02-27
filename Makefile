
CC = gcc
CXXFLAGS = -Wall -03

LDFLAGS = -pthread -lm

TARGET = main

all: $(TARGET)

$(TARGET): main.o fifo.o
		$(CC) -o $@ $^ $(LDFLAGS)

$(TARGET):	fifo.h

clean:
		rm -f *.o *~

cleanall:	clean
		rm -f $(TARGET)
