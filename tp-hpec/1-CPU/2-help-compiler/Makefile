.PHONY: all clean
objects = build/main.o build/additions.o
headers = src/vadd/additions.hpp

#the march and mtune options might not fully work 
#on some fancy ARM processors
opts    = -Wall -march=native -mtune=native -O2 -g0


main : build $(objects)
	g++ $(opts) -o main $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/additions.o : src/vadd/additions.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/additions.cpp

build : 
	mkdir build

clean :
	rm -rf build
	rm -rf main