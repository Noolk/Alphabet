.PHONY: all clean

all: bin/main

bin/main: build/src/main.o build/src/sort.o
	g++ -o bin/main build/src/sort.o build/src/main.o
build/src/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/src/main.o
build/src/sort.o: src/sort.cpp
	g++ -c src/sort.cpp -o build/src/sort.o 
clean:
	rm build/src/*.o
	
