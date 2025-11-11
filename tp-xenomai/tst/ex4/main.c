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
#define PRIO3 98

pthread_mutex_t mutex1;
pthread_mutex_t mutex2;
pthread_mutex_t mutex3;

pthread_attr_t attr_thread1;
pthread_t thread1;

pthread_attr_t attr_thread2;
pthread_t thread2;

pthread_attr_t attr_thread3;
pthread_t thread3;

struct sched_param param1;
struct sched_param param2;
struct sched_param param3;

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
  
  pthread_mutex_lock(&mutex1);
  rt_printf("RDV pris task1\n");
  BSP_setLED(1);
  while(1) {
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  }
  pthread_exit(NULL);
}

void *task2() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  pthread_mutex_lock(&mutex2);
  rt_printf("RDV pris task2\n");
  BSP_setLED(2);
  while(1) {
  	
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  }
  pthread_exit(NULL);
}
void *task3() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  pthread_mutex_lock(&mutex3);
  rt_printf("RDV pris task3\n");
  BSP_setLED(3);
  while(1) {
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  }
  pthread_exit(NULL);
}

int main() {
  LED = 0;
  
  struct timespec ts;

  ts.tv_sec = 2; // En s
  ts.tv_nsec = 0; // En ns
  
  mlockall(MCL_CURRENT|MCL_FUTURE);

  BSP_init();
  pthread_mutex_init(&mutex1, NULL);  
  pthread_mutex_lock(&mutex1);
  pthread_mutex_init(&mutex2, NULL);  
  pthread_mutex_lock(&mutex2);
  pthread_mutex_init(&mutex3, NULL);  
  pthread_mutex_lock(&mutex3);

  pthread_attr_init (&attr_thread1);
  pthread_attr_setinheritsched(&attr_thread1, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread1, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread2);
  pthread_attr_setinheritsched(&attr_thread2, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread2, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread3);
  pthread_attr_setinheritsched(&attr_thread3, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread3, SCHED_FIFO);
  
  param1.sched_priority = PRIO1;
  pthread_attr_setschedparam(&attr_thread1, &param1);
  pthread_create(&thread1, &attr_thread1, task1, NULL);
  
  param2.sched_priority = PRIO2;
  pthread_attr_setschedparam(&attr_thread2, &param2);
  pthread_create(&thread2, &attr_thread2, task2, NULL);
  
  param3.sched_priority = PRIO3;
  pthread_attr_setschedparam(&attr_thread3, &param3);
  pthread_create(&thread3, &attr_thread3, task3, NULL);
  
  clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  pthread_mutex_unlock(&mutex1);
  clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  pthread_mutex_unlock(&mutex2);
  clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  pthread_mutex_unlock(&mutex3);
  
  
  
  pthread_join(thread2, NULL);
  pthread_join(thread1, NULL);
  pthread_join(thread3, NULL);
  
  BSP_release();  
  exit(0);
}
