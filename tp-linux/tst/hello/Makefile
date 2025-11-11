#CC=gcc
CC=arm-buildroot-linux-gnueabihf-gcc
OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =	hello.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o hello

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ hello
