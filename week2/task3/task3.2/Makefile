SHELL=/bin/bash
INC=-Iinclude
CC=g++

all: clean prepare build
	@echo "Building application...done"
	echo $(SHELL)

clean:
	rm -rf bin
	rm -rf obj

prepare:
	mkdir -p bin
	mkdir -p obj

build:
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Car.o src/Car.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Passenger.o src/Passenger.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Power.o src/Power.cpp
	$(CC) -g -O0 -o bin/main.p obj/Car.o obj/main.o obj/Power.o obj/Passenger.o
