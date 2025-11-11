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
#define PRIO4 98
#define PRIO5 98

pthread_mutex_t mutex1;
pthread_mutex_t mutex2;
pthread_mutex_t mutex3;
pthread_mutex_t mutex4;
pthread_mutex_t mutex5;

pthread_attr_t attr_thread1;
pthread_t thread1;

pthread_attr_t attr_thread2;
pthread_t thread2;

pthread_attr_t attr_thread3;
pthread_t thread3;

pthread_attr_t attr_thread4;
pthread_t thread4;

pthread_attr_t attr_thread5;
pthread_t thread5;

struct sched_param param1;
struct sched_param param2;
struct sched_param param3;
struct sched_param param4;
struct sched_param param5;

char LED;
int i;

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
  
  struct timespec ts_att;

  ts_att.tv_sec = 1; // En s
  ts_att.tv_nsec = 0; // En ns
  
  
  while(1) {
    if ((pthread_mutex_trylock(&mutex1)==0) && (pthread_mutex_trylock(&mutex5) == 0)){
    
      rt_printf("miam task1\n");
      BSP_setLED(1);
      clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
      BSP_clrLED(1);
      
    } 
    pthread_mutex_unlock(&mutex5);
    pthread_mutex_unlock(&mutex1);
    rt_printf("attente miam task1\n");		
    clock_nanosleep(CLOCK_REALTIME, 0, &ts_att, NULL);
    
	    
  }
  pthread_exit(NULL);
}


void *task2() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  struct timespec ts_att;

  ts_att.tv_sec = 1; // En s
  ts_att.tv_nsec = 0; // En ns
  
  while(1) {
    if ((pthread_mutex_trylock(&mutex1)==0) && (pthread_mutex_trylock(&mutex2) == 0)){
    
      rt_printf("miam task2\n");
      BSP_setLED(2);
      clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
      BSP_clrLED(2);
      
    } 
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);
    rt_printf("attente miam task2\n");		
    clock_nanosleep(CLOCK_REALTIME, 0, &ts_att, NULL);
    
  }
  pthread_exit(NULL);
}

void *task3() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  struct timespec ts_att;

  ts_att.tv_sec = 1; // En s
  ts_att.tv_nsec = 0; // En ns
  
  while(1) {
    if ((pthread_mutex_trylock(&mutex2)==0) && (pthread_mutex_trylock(&mutex3) == 0)){
    
      rt_printf("miam task3\n");
      BSP_setLED(3);
      clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
      BSP_clrLED(3);
      
    }
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex3);
    rt_printf("attente miam task3\n");		
    clock_nanosleep(CLOCK_REALTIME, 0, &ts_att, NULL);
    
  }
  pthread_exit(NULL);
}

void *task4() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  struct timespec ts_att;

  ts_att.tv_sec = 1; // En s
  ts_att.tv_nsec = 0; // En ns
  
  while(1) {
    if ((pthread_mutex_trylock(&mutex3)==0) && (pthread_mutex_trylock(&mutex4) == 0)){
    
      rt_printf("miam task4\n");
      BSP_setLED(4);
      clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
      BSP_clrLED(4);
      
    }
    pthread_mutex_unlock(&mutex3);
    pthread_mutex_unlock(&mutex4);
    rt_printf("attente miam task4\n");		
    clock_nanosleep(CLOCK_REALTIME, 0, &ts_att, NULL);
    
  }
  pthread_exit(NULL);
}

void *task5() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns
  
  struct timespec ts_att;

  ts_att.tv_sec = 1; // En s
  ts_att.tv_nsec = 0; // En ns
  
  while(1) {
    if ((pthread_mutex_trylock(&mutex4)==0) && (pthread_mutex_trylock(&mutex5) == 0)){
    
      rt_printf("miam task5\n");
      BSP_setLED(5);
      clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
      BSP_clrLED(5);
      
    }
    pthread_mutex_unlock(&mutex4);
    pthread_mutex_unlock(&mutex5);
    rt_printf("attente miam task5\n");		
    clock_nanosleep(CLOCK_REALTIME, 0, &ts_att, NULL);
    
  }
  pthread_exit(NULL);
}


int main() {
  LED = 0;

  mlockall(MCL_CURRENT|MCL_FUTURE);

  BSP_init();
  pthread_mutex_init(&mutex1, NULL);  

  pthread_mutex_init(&mutex2, NULL);  

  pthread_mutex_init(&mutex3, NULL);  
  
  pthread_mutex_init(&mutex4, NULL);  

  pthread_mutex_init(&mutex5, NULL);  


  pthread_attr_init (&attr_thread1);
  pthread_attr_setinheritsched(&attr_thread1, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread1, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread2);
  pthread_attr_setinheritsched(&attr_thread2, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread2, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread3);
  pthread_attr_setinheritsched(&attr_thread3, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread3, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread4);
  pthread_attr_setinheritsched(&attr_thread4, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread4, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread5);
  pthread_attr_setinheritsched(&attr_thread5, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread5, SCHED_FIFO);
  
  param1.sched_priority = PRIO1;
  pthread_attr_setschedparam(&attr_thread1, &param1);
  pthread_create(&thread1, &attr_thread1, task1, NULL);
  
  param2.sched_priority = PRIO2;
  pthread_attr_setschedparam(&attr_thread2, &param2);
  pthread_create(&thread2, &attr_thread2, task2, NULL);
  
  param3.sched_priority = PRIO3;
  pthread_attr_setschedparam(&attr_thread3, &param3);
  pthread_create(&thread3, &attr_thread3, task3, NULL);
  
  param4.sched_priority = PRIO4;
  pthread_attr_setschedparam(&attr_thread4, &param4);
  pthread_create(&thread4, &attr_thread4, task4, NULL);
  
  param5.sched_priority = PRIO5;
  pthread_attr_setschedparam(&attr_thread5, &param5);
  pthread_create(&thread5, &attr_thread5, task5, NULL);
   
  
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  pthread_join(thread3, NULL);
  pthread_join(thread4, NULL);
  pthread_join(thread5, NULL);
  
  BSP_release();  
  exit(0);
}
