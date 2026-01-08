OPT=-Wall
LFLAGS = -o $@
CFLAGS = -c
OBJS =  tsttimer64.o

main : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o tsttimer64

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f *.o *~ tsttimer64
