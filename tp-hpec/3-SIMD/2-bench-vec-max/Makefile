.PHONY: all clean
objects = build/main.o \
          build/vec_max_avx2.o \
		  build/vec_max_neon.o \
		  build/vec_max_sse4.o \
		  build/vec_max_x86.o

headers = src/tools.hpp \
          src/vmax/avx2/vec_max_avx2.hpp \
		  src/vmax/neon/vec_max_neon.hpp \
		  src/vmax/sse4/vec_max_sse4.hpp \
		  src/vmax/x86/vec_max_x86.hpp

#the march and mtune options might not fully work
#on some fancy ARM processors
opts    = -Wall -march=native -mtune=native -O2 -g0 -funroll-loops -ffast-math -lm

main : build $(objects)
	g++ $(opts) -o main $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/vec_max_avx2.o : src/vmax/avx2/vec_max_avx2.cpp $(headers)
	g++ $(opts) -c -o $@ src/vmax/avx2/vec_max_avx2.cpp

build/vec_max_neon.o : src/vmax/neon/vec_max_neon.cpp $(headers)
	g++ $(opts) -c -o $@ src/vmax/neon/vec_max_neon.cpp

build/vec_max_sse4.o : src/vmax/sse4/vec_max_sse4.cpp $(headers)
	g++ $(opts) -c -o $@ src/vmax/sse4/vec_max_sse4.cpp

build/vec_max_x86.o : src/vmax/x86/vec_max_x86.cpp $(headers)
	g++ $(opts) -c -o $@ src/vmax/x86/vec_max_x86.cpp

build :
	mkdir build

clean :
	rm -rf build
	rm -rf main