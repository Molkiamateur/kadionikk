#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <sys/mman.h>
 
#include <alchemy/task.h>
#include "xparameters.h"

#define SIZE 4096
 
// 1 seconde correspond à l'incrémentation du compteur de 100 millions
#define COUNT_1S 100000000

// 1 microseconde correspond à l'incrémentation du compteur de 100 (10 ns)
#define COUNT_1U 100

// Periode de 1 s
#define TIMESLEEP 1000000000

// Priorite de la tache
#define PRIO 99

RT_TASK demo_task;
int end=0;

volatile int *ptr;

void catch_signal() {
  end=1;
}

void demo() {
  unsigned int fort1, fort2;
  unsigned int faible1, faible2;
  unsigned long long value1, value2;
  int delta;
  unsigned int jitter;
  unsigned int jitter_max;

  jitter_max = 0;

  rt_printf("Starting Xenomai task...\n");

  // Configuration de la tache courante en mode periodique
  rt_task_set_periodic(NULL, TM_NOW, TIMESLEEP);
  
  rt_task_wait_period(NULL);

  while(end == 0) {

    *ptr = 1; // Snapshot
    fort1 = *ptr;
    faible1 = *(ptr+1);

    rt_task_wait_period(NULL);

    *ptr = 1; // Snapshot
    fort2 = *ptr;
    faible2 = *(ptr+1);

    value1 = ((unsigned long long) fort1 << 32) | faible1;
    value2 = ((unsigned long long) fort2 << 32) | faible2;

    delta = value2-value1;
    jitter = abs(delta - COUNT_1S);


    if (jitter > jitter_max){
    	jitter_max = jitter;
    	}
    rt_printf("jitter max : %d us \r",jitter_max/100); fflush(stdout);
  }
}
  
int main() {
  char  str[32];
  int fd; 

  signal(SIGTERM, catch_signal);
  signal(SIGINT, catch_signal);

  mlockall(MCL_CURRENT|MCL_FUTURE);

  fd=open("/dev/mem",O_RDWR | O_SYNC);
  if(fd < 0) {
    printf("Failed to open /dev/mem\n");
    exit(-1);
  }
  printf("/dev/mem open OK\n");

  ptr = mmap(0, SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, fd, XPAR_MON_IP_0_S00_AXI_BASEADDR);

  if(ptr == (void *)-1) {
    close(fd);
    rt_printf("mmap failed\n");
    exit(-1);
  }
  printf("mmap OK\n");

  *ptr = 0x2; // Reset

  sprintf(str,"jitter");

  rt_task_create(&demo_task, str, 0, PRIO, 0);
  rt_task_start(&demo_task, &demo, 0);

  // Attente appui sur clavier
  getchar();

  rt_task_delete(&demo_task);
  munmap((void *)ptr, SIZE);
  close(fd);
  exit(0);
}
