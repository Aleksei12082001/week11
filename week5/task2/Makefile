SHELL=/bin/bash
INC=-Iinclude
CC=g++

all: clean prepare build
	@echo "Building application...done"
	echo $(SHELL)

prepare:
	mkdir -p bin
	mkdir -p obj

build:
	$(CC) -Wall -g -O0 -c $(INC) -o obj/calculator.o src/calculator.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -g -O0 -o bin/main.p obj/main.o obj/calculator.o 

