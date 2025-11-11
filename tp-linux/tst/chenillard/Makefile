#CC=gcc
CC=arm-buildroot-linux-gnueabihf-gcc
OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =	chenillard.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o chenillard

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ chenillard
