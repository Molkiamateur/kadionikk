OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =  tstinc.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o tstinc

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ tstinc
