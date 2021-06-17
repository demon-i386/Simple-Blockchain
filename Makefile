CC=c++

INCLUDE=include
BIN=bin

all:
	install
	run
	clean
		
run:
	$(BIN)/main

clean:
	rm -fr $(INCLUDE)/objs
	rm $(BIN)/main

install:
	rm -fr include/objs
	mkdir  include/objs
	$(CC) -c $(INCLUDE)/blockchain/blockchain.cpp -I $(INCLUDE)/blockchain -o $(INCLUDE)/objs/blockchain.o 
	$(CC) -c $(INCLUDE)/blockchain/block.cpp      -I $(INCLUDE)/blockchain -o $(INCLUDE)/objs/block.o 
	$(CC) -c $(INCLUDE)/consensus/validation.cpp  -I $(INCLUDE)/blockchain -o $(INCLUDE)/objs/validation.o
	$(CC) -c $(INCLUDE)/crypto/sha256.cpp         -I $(INCLUDE) -lcrypto   -o $(INCLUDE)/objs/sha256.o
	$(CC) $(BIN)/main.cpp $(INCLUDE)/objs/*.o     -I $(INCLUDE)/crypto/    -I $(INCLUDE)/blockchain/ -lcrypto -o $(BIN)/main