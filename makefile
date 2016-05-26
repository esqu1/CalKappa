OBJECTS= vector.o
CFLAGS= -std=c++11 -O2
CC=g++

all: $(OBJECTS)
	$(CC) $(CFLAGS) -o main.out main.cpp $(OBJECTS)

vector.o: vector.cpp head.h
	$(CC) $(CFLAGS) -c vector.cpp -o vector.o

clean:
	rm *~ *.o
