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

#define SIZE 4096

volatile int *ptr;
 
int main(int argc, char **argv) {

  int fd;
  unsigned int fort1, fort2;
  unsigned int faible1, faible2;
  int delta;

  delta = 0;

  fd=open("/dev/mem",O_RDWR | O_SYNC);
  if(fd < 0) {
    printf("Failed to open /dev/mem\n");
    exit(-1);
  }
  printf("/dev/mem open OK\n");

  ptr = mmap(0, SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, fd, XPAR_MON_IP_0_S00_AXI_BASEADDR);

  if(ptr == (void *)-1) {
    close(fd);
    printf("mmap failed\n");
    exit(-1);
  }
  printf("mmap OK\n");

  printf("Test timer 64 bits. Delta value\r\n");
  printf("Delai = 1000 ms\r\n");

  *ptr = 2; // Reset

  while(1) {

    *ptr = 1; // Snapshot
    fort1 = *ptr;
    faible1 = *(ptr+1);

    sleep(1);

    *ptr = 1; // Snapshot
    fort2 = *ptr;
    faible2 = *(ptr+1);
    
    delta = (faible2 - faible1) - 100000000;
    delta/=100;

    printf("ecart : %d us\n", delta);
  }

  munmap((void *)ptr, SIZE);
  close(fd);
  exit(0);
}
