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

// Periode de 1 s en ns
#define TIMESLEEP 1*1000*1000*1000

RT_TASK rt_task1;
#define PRIO1 99

void task1() {

  rt_printf("Starting Xenomai task1...\n");

  while(1) {
    rt_printf("Hello World from task1!\n");
    rt_task_sleep(TIMESLEEP); 
  }
}
  
int main() {

  // Pas de memory swapping
  mlockall(MCL_CURRENT|MCL_FUTURE);

  // Creation et demarrage de la tache Xenomai
  rt_task_create(&rt_task1, "task1", 0, PRIO1, 0);
  rt_task_start(&rt_task1, &task1, 0);

  sleep(10);
  
  // Destruction de la tache Xenomai
  rt_task_delete(&rt_task1);
  
  exit(0);
}
