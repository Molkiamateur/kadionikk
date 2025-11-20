.PHONY: all clean
objects = build/main.o \
          build/vec_add_avx2.o \
		  build/vec_add_avx512.o \
		  build/vec_add_neon.o \
		  build/vec_add_sse4.o \
		  build/vec_add_x86.o

headers = src/tools.hpp \
          src/vadd/avx2/vec_add_avx2.hpp \
		  src/vadd/avx512/vec_add_avx512.hpp \
		  src/vadd/neon/vec_add_neon.hpp \
		  src/vadd/sse4/vec_add_sse4.hpp \
		  src/vadd/x86/vec_add_x86.hpp

#the march and mtune options might not fully work
#on some fancy ARM processors
opts    = -Wall -march=native -mtune=native -O2 -g0 -funroll-loops -ffast-math -lm

main : build $(objects)
	g++ $(opts) -o main $(objects)

build/main.o : src/main.cpp $(headers)
	g++ $(opts) -c -o $@ src/main.cpp

build/vec_add_avx2.o : src/vadd/avx2/vec_add_avx2.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/avx2/vec_add_avx2.cpp

build/vec_add_avx512.o : src/vadd/avx512/vec_add_avx512.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/avx512/vec_add_avx512.cpp

build/vec_add_neon.o : src/vadd/neon/vec_add_neon.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/neon/vec_add_neon.cpp

build/vec_add_sse4.o : src/vadd/sse4/vec_add_sse4.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/sse4/vec_add_sse4.cpp

build/vec_add_x86.o : src/vadd/x86/vec_add_x86.cpp $(headers)
	g++ $(opts) -c -o $@ src/vadd/x86/vec_add_x86.cpp

build :
	mkdir build

clean :
	rm -rf build
	rm -rf main
