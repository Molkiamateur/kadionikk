OPT=-Wall
LFLAGS = -DDEBUG -g -o $@
CFLAGS = -DDEBUG -c
OBJS =	babbage.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o babbage

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ babbage
