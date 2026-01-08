OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =  jitter.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o jitter

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ jitter
