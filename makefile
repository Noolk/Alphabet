.PHONY: all clean test

all: bin/main
test: bin/tests
	./bin/tests

bin/main: build/src/main.o build/src/sort.o
	g++ -o bin/main build/src/sort.o build/src/main.o
build/src/main.o: src/main.c
	g++ -c src/main.c -o build/src/main.o
build/src/sort.o: src/sort.c
	g++ -c src/sort.c -o build/src/sort.o 
bin/tests: build/src/sort.o build/tests/main.o 
	g++ build/src/sort.o build/tests/main.o -o bin/tests
build/tests/main.o: test/main.cpp
	g++ -c test/main.cpp -o build/tests/main.o
build/tests/sort.o: test/sort.cpp
	g++ -c test/sort.cpp -o build/tests/sort.o
clean:
	rm build/tests/*.o
	rm build/src/*.o
	
