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
#include <termios.h>

#define PRIO1 99
#define PRIO2 99
#define PRIO3 1

//pthread_mutex_t mutex;

pthread_attr_t attr_thread_chrono;
pthread_t thread_chrono;

pthread_attr_t attr_thread_interface;
pthread_t thread_interface;

pthread_attr_t attr_thread_affichage;
pthread_t thread_affichage;

struct sched_param param_chrono;
struct sched_param param_interface;
struct sched_param param_affichage;

char getconfig;
int config;
int ms;
int s;
int m;


char mygetchar(){
  char c;
  struct termios old, new;
	
  tcgetattr(STDIN_FILENO, &old);
	
  new = old;
  new.c_lflag = ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &new);
	
  c = getchar();
	
  tcsetattr(STDIN_FILENO, TCSANOW, &new);
	
  return c;
}

void *task_chrono() {
  struct timespec ts;

  ts.tv_sec = 0; // En s
  ts.tv_nsec = 100000000; // En ns
  
  while(1) {
    switch (config){
    case 1: //s
      ms += 100;
      if(ms == 1000){
	ms = 0;
	s++;
      }
      if(s == 60){
	s = 0;
	m++;
      }
      break;
    	
    case 2: //t
      // ne fait rien, il attend
      break;
      
    case 3: //r
      ms = 0;
      s = 0;
      m = 0;
      break;
      
    default:
      // ne fait rien
      break;
    }
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL); 
  }
  
  pthread_exit(NULL);
}

void *task_affichage(){
  struct timespec ts;

  ts.tv_sec = 0; // En s
  ts.tv_nsec = 10000; // En ns
  while(1){
    rt_printf("\rchrono : %02d:%02d:%03d", m, s, ms);
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL); 
  } 
  
  pthread_exit(NULL);
}

void *task_interface() {
  struct timespec ts;

  ts.tv_sec = 0; // En s
  ts.tv_nsec = 10000000; // En ns
  
  while(1) {
    getconfig = mygetchar();
    switch (getconfig){
    case 115: //s
      config = 1;
      rt_printf("\n=============================\n");
      rt_printf("Demarrage du chrono\n");
      rt_printf("=============================\n");
      break;
    case 113: //q
      config = -1;
      break;
    case 116: //t
      rt_printf("\n=============================\n");
      rt_printf("Stop du chrono\n");
      rt_printf("chrono : %02d:%02d:%03d\n", m, s, ms);
      rt_printf("=============================\n");
      config = 2;
      break;
    case 114: //r
      rt_printf("\n=============================\n");
      rt_printf("Remise a zero du chrono\n");
      rt_printf("chrono : %02d:%02d:%03d\n", m, s, ms);
      rt_printf("=============================\n");
      config = 3;
      break;
    default:
      //ne fait rien
      break;
    }
    clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
  }
  pthread_exit(NULL);
}



int main() {
  config = 0;
  mlockall(MCL_CURRENT|MCL_FUTURE);

  pthread_attr_init (&attr_thread_chrono);
  pthread_attr_setinheritsched(&attr_thread_chrono, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread_chrono, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread_affichage);
  pthread_attr_setinheritsched(&attr_thread_affichage, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread_affichage, SCHED_FIFO);
  
  pthread_attr_init (&attr_thread_interface);
  pthread_attr_setinheritsched(&attr_thread_interface, PTHREAD_EXPLICIT_SCHED);
  pthread_attr_setschedpolicy(&attr_thread_interface, SCHED_FIFO);
  
  param_chrono.sched_priority = PRIO1;
  pthread_attr_setschedparam(&attr_thread_chrono, &param_chrono);
  pthread_create(&thread_chrono, &attr_thread_chrono, task_chrono, NULL);
  
  param_affichage.sched_priority = PRIO2;
  pthread_attr_setschedparam(&attr_thread_affichage, &param_affichage);
  pthread_create(&thread_affichage, &attr_thread_affichage, task_affichage, NULL);
  
  param_interface.sched_priority = PRIO3;
  pthread_attr_setschedparam(&attr_thread_interface, &param_interface);
  pthread_create(&thread_interface, &attr_thread_interface, task_interface, NULL);
  
  rt_printf("=============================\n");
  rt_printf("Bienvenue mon gars suuuuuurrr\n");
  rt_printf("=============================\n");
  
  while(1){
    if(config == -1){
      rt_printf("\n=============================\n");
      rt_printf("Arret du chrono, à plus mon gars !!\n");
      rt_printf("=============================\n");
      exit(0);
    }
  }
  pthread_join(thread_chrono, NULL);
  pthread_join(thread_interface, NULL);
  pthread_join(thread_affichage, NULL);
  
  exit(0);
}
