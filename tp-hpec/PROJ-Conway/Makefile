.PHONY: all clean
objects = build/main.o build/kernels.o build/frame.o build/kernel_GPU.o
headers = src/frame/frame.hpp src/kernels/kernels.hpp
kernels = src/kernels/kernels.cpp \
          src/kernels/kernel_Naive.cpp \
          src/kernels/kernel_Smart.cpp \
          src/kernels/kernel_OpenMP.cpp \
          src/kernels/kernel_SIMD.cpp \
          src/kernels/kernel_Fast.cpp \
          src/kernels/kernel_Bit.cpp \


# Compil CPU
opts    = -Wall -march=native -mtune=native -Ofast -g0 -fopenmp -pg
cpuopts = -march=native -mtune=native

# Compil CUDA (4070 Super -> sm_89)
CUDA_ARCH = -arch=sm_89
NVCC_OPTS = -O3 $(CUDA_ARCH)

glife : build $(objects)
	g++ $(opts) -o glife $(objects) -lcudart -L/usr/local/cuda/lib64

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/frame.o : src/frame/frame.cpp $(headers)
	g++ $(opts) -c -o $@ src/frame/frame.cpp

build/kernels.o : $(kernels) $(headers)
	g++ $(opts) -c -o $@ src/kernels/kernels.cpp

# ============
#   GPU PART
# ============

# compile le kernel GPU en .o
build/kernel_GPU.o : src/kernels/kernel_GPU.cu $(headers)
	nvcc $(NVCC_OPTS) -c -o $@ src/kernels/kernel_GPU.cu

build :
	mkdir build

clean :
	rm -rf build
	rm -rf glife
	rm -rf data/final.pbm
