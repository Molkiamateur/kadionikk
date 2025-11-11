#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <pthread.h>
#include <sched.h>
 
#include <alchemy/task.h>
#include "bcm2835.h"
#include "bcm2835.c"
#include "bsp.h"
#include "bsp.c"

#define PRIO1 98
#define PRIO2 98

pthread_mutex_t mutex;

pthread_attr_t attr_thread1;
pthread_t thread1;

pthread_attr_t attr_thread2;
pthread_t thread2;

struct sched_param param1;
struct sched_param param2;

char LED;

void toggle(unsigned char led){
  if(LED == 0){
    BSP_setLED(led);
    LED = 1;
  }
  else{
    BSP_clrLED(led);
    LED = 0;
  }
}

void *task1() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns

  while(1) {
    pthread_mutex_lock(&mutex);
    rt_printf("je prend task1\n");
    toggle(1);
    
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
    pthread_mutex_unlock(&mutex);
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);

  }
  pthread_exit(NULL);
}

void *task2() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns

  while(1) {
    pthread_mutex_lock(&mutex);
    rt_printf("je prend task2\n");
    toggle(1);
    
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
    pthread_mutex_unlock(&mutex);
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);

  }
  pthread_exit(NULL);
}

int main() {
  LED = 0;
  mlockall(MCL_CURRENT|MCL_FUTURE);

  BSP_init();
  pthread_mutex_init(&mutex, NULL);  

  pthread_attr_init (&attr_thread1);
  pthread_attr_setinheritsched(&attr_thread1, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread1, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread2);
  pthread_attr_setinheritsched(&attr_thread2, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread2, SCHED_FIFO);
  
  param1.sched_priority = PRIO1;
  pthread_attr_setschedparam(&attr_thread1, &param1);
  pthread_create(&thread1, &attr_thread1, task1, NULL);
  
  param2.sched_priority = PRIO2;
  pthread_attr_setschedparam(&attr_thread2, &param2);
  pthread_create(&thread2, &attr_thread2, task2, NULL);
  
  pthread_join(thread2, NULL);
  pthread_join(thread1, NULL);
  
  BSP_release();  
  exit(0);
}
