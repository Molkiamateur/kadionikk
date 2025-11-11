# Generated automatically from Makefile.in by configure.
prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
LN_S = ln -s
mandir = ${prefix}/man
includedir = ${prefix}/include
CC		=	gcc	
CFLAGS		=	-g -O2
LIBS		=	
LDFLAGS  	= 
resched	=	resched
getsched	=	getsched
sched 		=	sched
INSTALL		= 	/usr/bin/install -c
all: ${getsched} ${resched} ${sched}

getsched: getsched.o util.o config.h
	${CC} ${LIBS} ${LDFLAGS} -o ${getsched} getsched.o util.o 
sched: sched.o util.o isnumber.o
	${CC} ${LIBS} ${LDFLAGS} -o ${sched} sched.o util.o isnumber.o
resched: resched.o util.o isnumber.o
	${CC} ${LIBS} ${LDFLAGS} -o ${resched} resched.o util.o isnumber.o
util.o: util.c util.h config.h
	${CC} ${CFLAGS} -o  util.o -c util.c
isnumber.o: isnumber.c isnumber.h
	${CC} ${CFLAGS} -o  isnumber.o -c isnumber.c

resched.o: resched.c config.h util.h isnumber.h
	${CC} ${CFLAGS} -o  resched.o -c resched.c
sched.o: sched.c util.h config.h 
	${CC} ${CFLAGS} -o  sched.o -c sched.c
getsched.o: getsched.c util.h config.h 
	${CC} ${CFLAGS} -o  getsched.o -c getsched.c
clean:
	rm -f ${getsched}
	rm -f ${sched}
	rm -f ${resched}
	rm -f core *~
	rm -f *.o
install:
	${INSTALL}  ./${getsched}  ${bindir}
	chmod 555 ${bindir}/${getsched}
	${INSTALL}  ./${resched} ${sbindir}
	chmod 544 ${sbindir}/${resched}
	${INSTALL}  ./${sched} ${sbindir}
	chmod 544 ${sbindir}/${sched}
	${INSTALL} ./sched.8   ${mandir}/man8
	${LN_S} ${mandir}/man8/sched.8 ${mandir}/man8/resched.8
uninstall:
	rm -f ${sbindir}/${sched}
	rm -f ${bindir}/${getsched}
	rm -f ${sbindir}/${resched}
	rm -f ${mandir}/man8/sched.8  ${mandir}/man8/resched.8   
