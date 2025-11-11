CC = arm-buildroot-linux-gnueabihf-gcc
OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =	myserver.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o myserver

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ myserver
