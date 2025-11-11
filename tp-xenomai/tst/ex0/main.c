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

#define PRIO1 99
pthread_attr_t attr_thread1;
pthread_t thread1;

struct sched_param param;

void *task1() {
  struct timespec ts;

  ts.tv_sec = 1; // En s
  ts.tv_nsec = 0; // En ns

  rt_printf("Starting Xenomai thread1...\n");

  while(1) {
    rt_printf("Hello World from thread1!\n");
   
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  }
  pthread_exit(NULL);
}
  
int main() {

  mlockall(MCL_CURRENT|MCL_FUTURE);

  pthread_attr_init (&attr_thread1);
  pthread_attr_setinheritsched(&attr_thread1, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread1, SCHED_FIFO);

  param.sched_priority = PRIO1;
  pthread_attr_setschedparam(&attr_thread1, &param);

  pthread_create(&thread1, &attr_thread1, task1, NULL);

  sleep(10);
  
  pthread_cancel(thread1);
  
  exit(0);
}
