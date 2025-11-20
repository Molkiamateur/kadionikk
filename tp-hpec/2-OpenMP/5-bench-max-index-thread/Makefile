.PHONY: all clean
objects = build/main.o build/vec_max_index.o
headers = src/vmax_index/vec_max_index_threads.hpp

#the march and mtune options might not fully work
#on some fancy ARM processors
opts    = -Wall -march=native -mtune=native -O2 -g0 -fopenmp

main : build $(objects)
	g++ $(opts) -o main $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/vec_max_index.o : src/vmax_index/vec_max_index_threads.cpp $(headers)
	g++ $(opts) -c -o $@ src/vmax_index/vec_max_index_threads.cpp

build :
	mkdir build

clean :
	rm -rf build
	rm -rf main
