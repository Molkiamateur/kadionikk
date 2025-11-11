CC = arm-buildroot-linux-gnueabihf-gcc
EXEC = mysmtp
OBJS = emsmtpc.c main.o

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

clean:
	-rm -f $(EXEC) *~ *.elf *.gdb *.o
