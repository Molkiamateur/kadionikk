.PHONY: all clean
objects = build/main.o build/kernels.o build/frame.o
headers = src/frame/frame.hpp src/kernels/kernels.hpp

kernels = src/kernels/kernels.cpp \
          src/kernels/kernel_Naive.cpp \
          src/kernels/kernel_Smart.cpp \
          src/kernels/kernel_OpenMP.cpp \
          src/kernels/kernel_SIMD.cpp \
          src/kernels/kernel_Fast.cpp \
          src/kernels/kernel_Bit.cpp

opts    = -Wall -march=native -mtune=native -Ofast -g0 -fopenmp -pg

# === DETECTION CUDA ===============================================
NVCC := $(shell which nvcc 2>/dev/null)

ifeq ($(NVCC),)
    CUDA_AVAILABLE = 0
    $(info [INFO] CUDA non détecté → compilation CPU-only)
else
    CUDA_AVAILABLE = 1
    $(info [INFO] CUDA détecté → compilation GPU activée)
    opts += -DHAVE_CUDA
    CUDA_LIBS = -L/usr/local/cuda/lib64 -lcudart
    KERNEL_GPU_OBJ = build/kernel_GPU.o
endif
# ==================================================================

all: build $(objects) $(KERNEL_GPU_OBJ)
ifeq ($(CUDA_AVAILABLE),1)
	# Lien avec CUDA
	g++ $(opts) -o glife $(objects) $(KERNEL_GPU_OBJ) $(CUDA_LIBS)
else
	# Lien sans CUDA
	g++ $(opts) -o glife $(objects)
endif

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/frame.o : src/frame/frame.cpp $(headers)
	g++ $(opts) -c -o $@ src/frame/frame.cpp

build/kernels.o : $(kernels) $(headers)
	g++ $(opts) -c -o $@ src/kernels/kernels.cpp

# Compile CUDA only if available
build/kernel_GPU.o : src/kernels/kernel_GPU.cu
ifeq ($(CUDA_AVAILABLE),1)
	nvcc -O3 -arch=sm_89 -c -o $@ $<
endif

build:
	mkdir -p build

clean:
	rm -rf build glife data/final.pbm
