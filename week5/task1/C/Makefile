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
	touch result.txt

build:
	dd if=/dev/urandom of=file.txt bs=1G count=1
	$(CC) -Wall -g -O0 -c $(INC) -o obj/shannon_entropy.o src/shannon_entropy.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -g -O0 -o bin/main obj/main.o obj/shannon_entropy.o 

