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

// 1 seconde correspond à l'incrémentation du compteur de 100 millions
#define COUNT_1S 100000000

// 1 microseconde correspond à l'incrémentation du compteur de 100 (10 ns)
#define COUNT_1U 100

volatile int *ptr;
 
int main() {
  int fd;
  unsigned int fort1, fort2;
  unsigned int faible1, faible2;
  unsigned long long value1, value2;
  int delta;
  unsigned int jitter;
  unsigned int jitter_max;

  jitter_max = 0;

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

  *ptr = 2; // Reset

  sleep(1);
  
  while(1) {

    *ptr = 1; // Snapshot
    fort1 = *ptr;
    faible1 = *(ptr+1);

    sleep(1);

    *ptr = 1; // Snapshot
    fort2 = *ptr;
    faible2 = *(ptr+1);

    value1 = ((unsigned long long) fort1 << 32) | faible1;
    value2 = ((unsigned long long) fort2 << 32) | faible2;

    delta = value2-value1;
    jitter = abs(delta - COUNT_1S);
    jitter/=100;
    
    if(jitter > jitter_max){
    	jitter_max = jitter;
    	//printf("jitter max : %d us\n", jitter_max);	
    }
    
    printf("jitter : %d us\r", jitter_max); fflush(stdout);
  }


  munmap((void *)ptr, SIZE);
  close(fd);
  exit(0);
}
