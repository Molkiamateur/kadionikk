.PHONY: all clean
objects = build/main.o build/kernels.o build/frame.o
headers = src/frame/frame.hpp src/kernels/kernels.hpp
kernels = src/kernels/kernels.cpp \
          src/kernels/kernel_Naive.cpp \
		  src/kernels/kernel_Smart.cpp \
		  src/kernels/kernel_OpenMP.cpp \
		  src/kernels/kernel_SIMD.cpp \
		  src/kernels/kernel_Fast.cpp \


#the march and mtune options might not fully work
#on some fancy ARM processors
opts    = -Wall -march=native -mtune=native -Ofast -g0 -fopenmp -pg
cpuopts = -march=native -mtune=native

glife : build $(objects)
	g++ $(opts) -o glife $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/frame.o : src/frame/frame.cpp $(headers)
	g++ $(opts) -c -o $@ src/frame/frame.cpp

build/kernels.o : $(kernels) $(headers)
	g++ $(opts) -c -o $@ src/kernels/kernels.cpp

build :
	mkdir build

clean :
	rm -rf build
	rm -rf glife
	rm -rf data/final.pbm