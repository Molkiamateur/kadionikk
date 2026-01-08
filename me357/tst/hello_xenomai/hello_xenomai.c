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

// Periode de 1 s
#define TIMESLEEP 1000000000

RT_TASK demo_task;
int end=0;

void catch_signal() {
  end=1;
}

void demo() {

  rt_printf("Starting Xenomai task...\n");

  // Configuration de la tache courante en mode periodique
  rt_task_set_periodic(NULL, TM_NOW, TIMESLEEP);

  while(end == 0) {

    // Attente de l'expiration de la periode
    rt_task_wait_period(NULL);

    rt_printf("Hello World from Xenomai!\n");
  }
}
  
int main() {
  char  str[32];

  // Execution de la fonction catch_signal Ctrl+C (SIGINT) et 
  // Sur un kill -9 (SIGTERM) pour tuer la tache Xenomai
  signal(SIGTERM, catch_signal);
  signal(SIGINT, catch_signal);

  // Avoids memory swapping for this program
  mlockall(MCL_CURRENT|MCL_FUTURE);

  // Definition du nom de la tache Xenomai
  sprintf(str,"hello");

  // Creation et demarrage de la tache Xenomai
  rt_task_create(&demo_task, str, 0, 50, 0);
  rt_task_start(&demo_task, &demo, 0);

  // Attente appui sur clavier
  getchar();

  rt_task_delete(&demo_task);
  exit(0);
}
