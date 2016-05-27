OBJECTS= bin/vector.o
CFLAGS= -std=c++11 -O2
CC=g++

all: $(OBJECTS)
	$(CC) $(CFLAGS) -o main.out main.cpp $(OBJECTS)

bin/vector.o: src/vector.cpp src/head.h
	$(CC) $(CFLAGS) -c src/vector.cpp -o bin/vector.o

clean:
	rm *~ bin/*.o
