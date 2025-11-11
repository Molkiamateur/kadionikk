CC = gcc
OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =	myclient.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o myclient

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ myclient
