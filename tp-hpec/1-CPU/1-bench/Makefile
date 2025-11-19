.PHONY: all clean
objects = build/main.o build/additions.o
headers = src/add/additions.hpp

#the march and mtune options might not fully work
#on some fancy ARM processors
#opts    = -Wall -march=native -mtune=native -O1 -g0
opts    = -Wall

main : build $(objects)
	g++ $(opts) -o main $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/additions.o : src/add/additions.cpp $(headers)
	g++ $(opts) -c -o $@ src/add/additions.cpp

build :
	mkdir build

clean :
	rm -rf build
	rm -rf main