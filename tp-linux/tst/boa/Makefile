CC = arm-buildroot-linux-gnueabihf-gcc
OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =	putleds.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o putleds

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ putleds
