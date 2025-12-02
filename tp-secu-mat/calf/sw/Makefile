TOOLCHAIN = riscv64-unknown-elf
CC = ${TOOLCHAIN}-gcc
AR = ${TOOLCHAIN}-ar
LD = ${TOOLCHAIN}-gcc

CFLAGS = -O3 -nostartfiles -fstrict-volatile-bitfields -ffunction-sections -fdata-sections
CFLAGS += -Woverflow 
CFLAGS += -march=rv32e -mabi=ilp32e

common:
	${CC} ${CFLAGS} -c src/common/gpio8.c -o obj/gpio8.o
	${CC} ${CFLAGS} -c src/common/uart.c -o obj/uart.o
	${CC} ${CFLAGS} -c src/common/cw.c -o obj/cw.o

example cw_example cw_measure cw_passwd: build-dir common
	${CC} ${CFLAGS} -c src/$@/start.S -o obj/start.o
	${CC} ${CFLAGS} -c src/$@/main.c -o obj/main.o
	${LD} ${CFLAGS} -T src/$@/script.ld obj/*.o -o elf/$@.elf
	${TOOLCHAIN}-objdump -D -M numeric elf/$@.elf > lst/$@.lst
	${TOOLCHAIN}-objcopy --only-section .ram* elf/$@.elf elf/$@.ram.elf
	python elf2hex.py -i elf/$@.ram.elf -o hex/$@.ram.mem -s 0x00000000 -l 4 -w 4
	cp hex/$@.ram.mem hex/sw.ram.mem

# cw: build-dir common
# 	${CC} ${CFLAGS} -c src/cw/start.S -o obj/start.o
# 	${CC} ${CFLAGS} -c src/cw/main.c -o obj/main.o
# 	${LD} ${CFLAGS} -T src/cw/script.ld obj/*.o -o elf/cw.elf
# 	${TOOLCHAIN}-objdump -D -M numeric elf/cw.elf > lst/cw.lst
# 	${TOOLCHAIN}-objcopy --only-section .ram* elf/cw.elf elf/cw.ram.elf
# 	python elf2hex.py -i elf/cw.ram.elf -o hex/cw.ram.mem -s 0x00000000 -l 4 -w 4
# 	cp hex/cw.ram.mem hex/sw.ram.mem
# 
# cw_passwd: build-dir common
# 	${CC} ${CFLAGS} -c src/cw_passwd/start.S -o obj/start.o
# 	${CC} ${CFLAGS} -c src/cw_passwd/main.c -o obj/main.o
# 	${LD} ${CFLAGS} -T src/cw_passwd/script.ld obj/*.o -o elf/cw_passwd.elf
# 	${TOOLCHAIN}-objdump -D -M numeric elf/cw_passwd.elf > lst/cw_passwd.lst
# 	${TOOLCHAIN}-objcopy --only-section .ram* elf/cw_passwd.elf elf/cw_passwd.ram.elf
# 	python elf2hex.py -i elf/cw_passwd.ram.elf -o hex/cw_passwd.ram.mem -s 0x00000000 -l 4 -w 4
# 	cp hex/cw_passwd.ram.mem hex/sw.ram.mem
# 
# cw_add: build-dir common
# 	${CC} ${CFLAGS} -c src/cw_add/start.S -o obj/start.o
# 	${CC} ${CFLAGS} -c src/cw_add/main.c -o obj/main.o
# 	${LD} ${CFLAGS} -T src/cw_add/script.ld obj/*.o -o elf/cw_add.elf
# 	${TOOLCHAIN}-objdump -D -M numeric elf/cw_add.elf > lst/cw_add.lst
# 	${TOOLCHAIN}-objcopy --only-section .ram* elf/cw_add.elf elf/cw_add.ram.elf
# 	python elf2hex.py -i elf/cw_add.ram.elf -o hex/cw_add.ram.mem -s 0x00000000 -l 4 -w 4
# 	cp hex/cw_add.ram.mem hex/sw.ram.mem
# 
# cw_nop: build-dir common
# 	${CC} ${CFLAGS} -c src/cw_nop/start.S -o obj/start.o
# 	${CC} ${CFLAGS} -c src/cw_nop/main.c -o obj/main.o
# 	${LD} ${CFLAGS} -T src/cw_nop/script.ld obj/*.o -o elf/cw_nop.elf
# 	${TOOLCHAIN}-objdump -D -M numeric elf/cw_nop.elf > lst/cw_nop.lst
# 	${TOOLCHAIN}-objcopy --only-section .ram* elf/cw_nop.elf elf/cw_nop.ram.elf
# 	python elf2hex.py -i elf/cw_nop.ram.elf -o hex/cw_nop.ram.mem -s 0x00000000 -l 4 -w 4
# 	cp hex/cw_nop.ram.mem hex/sw.ram.mem

tt: build-dir
	${CC} ${CFLAGS} -c src/tt/start.S -o obj/start.o
	${LD} ${CFLAGS} -T src/tt/script.ld obj/*.o -o elf/tt.elf
	${TOOLCHAIN}-objdump -D -M numeric elf/tt.elf > lst/tt.lst
	${TOOLCHAIN}-objcopy --only-section .ram* elf/tt.elf elf/tt.ram.elf
	python elf2hex.py -i elf/tt.ram.elf -o hex/tt.ram.mem -s 0x00000000 -l 4 -w 4
	cp hex/tt.ram.mem hex/sw.ram.mem

build-dir:
	rm -f obj/*.o
	mkdir -p lib/
	mkdir -p obj/
	mkdir -p elf/
	mkdir -p hex/
	mkdir -p lst/

clean:
	rm -rf lib/
	rm -rf obj/
	rm -rf elf/
	rm -rf hex/
	rm -rf lst/