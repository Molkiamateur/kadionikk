APPLICATIONS = hello_xenomai

#XENOCONFIG=/usr/xenomai/bin/xeno-config
XENOCONFIG=../../ramdisk/root_fs/usr/xenomai/bin/xeno-config

CC=$(shell      $(XENOCONFIG) --cc)
CFLAGS=$(shell  $(XENOCONFIG) --skin=alchemy --cflags)
LDFLAGS=$(shell $(XENOCONFIG) --skin=alchemy --ldflags)
LIBDIR=$(shell  $(XENOCONFIG) --skin=alchemy --libdir)

all:: $(APPLICATIONS)

pk:
	echo $(CLFLAGS)
	echo $(LDFLAGS)
	echo $(LIBDIR)


clean::
	$(RM) -f $(APPLICATIONS) *.o *~
