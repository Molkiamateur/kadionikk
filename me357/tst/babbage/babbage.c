#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <sys/mman.h>
 
#include "xparameters.h"
#include "xbabbage_hw.h"

#define TST_NBR 10
#define AP_START 0x01
#define AP_STOP 0x00
#define AP_DONE 0x02
#define SIZE 4096

volatile int *ptr;

int start() {
  *(ptr + (XBABBAGE_REG_ADDR_AP_CTRL/4)) = AP_START; // Offset registre en octets à traduire en 32 bits
}

int stop() {
  *(ptr + (XBABBAGE_REG_ADDR_AP_CTRL/4)) = AP_STOP;
}

int wait() {
  while((*(ptr + (XBABBAGE_REG_ADDR_AP_CTRL/4)) & AP_DONE) != AP_DONE) {
    ;
  }
}
 
int main(int argc, char **argv) {

  int fd;
  int n;
  int hw_result[TST_NBR], sw_result[TST_NBR];
  int res;
  unsigned int err_cnt;
  int i;

  fd=open("/dev/mem",O_RDWR | O_SYNC);
  if(fd < 0) {
    printf("Failed to open /dev/mem\n");
    exit(-1);
  }
  printf("/dev/mem open OK\n");

  ptr = mmap(0, SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, fd, XPAR_BABBAGE_0_S_AXI_REG_BASEADDR);

  if(ptr == (void *)-1) {
    close(fd);
    printf("mmap failed\n");
    exit(-1);
  }
  printf("mmap OK\n");

  stop();

  err_cnt = 0;

  // Software results
  n = 0;
  for (i=0; i<TST_NBR; i++) {
    res = 2*(n*n) + (3*n) + 5;
    sw_result[i] = res;
    n++;
  }

  // Call the DUT (hardware results)
  printf("Running DUT...");
  n = 0;
  for (i=0; i<TST_NBR; i++) {
	*(ptr + (XBABBAGE_REG_ADDR_N_DATA/4)) = n;
	start();
	wait();
	stop();
	hw_result[i] = *(ptr + (XBABBAGE_REG_ADDR_AP_RETURN/4));
	n++;
  }
  printf("done.\n");

  // Test the output against expected results
  printf("Testing DUT results...\n");
  for (i = 0; i < TST_NBR; i++) {
	  printf("\tDUT results: test=%d, DUT=%d, expected=%d\n", i, hw_result[i],sw_result[i]);
	  if (hw_result[i] != sw_result[i])
		  err_cnt++;
  }

  if (err_cnt) {
    printf("----------Fail!------------\n");
  }
  else {
    printf("----------Pass!------------\n");

  }
  munmap((void *)ptr, SIZE);
  close(fd);
  exit(0);
}
