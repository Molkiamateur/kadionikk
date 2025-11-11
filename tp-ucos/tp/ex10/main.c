#include <string.h>
#include <stdlib.h>
#include "cfg.h"
#include "cdefBF537.h"
#include "ucos_ii.h"
#include "bsp.h"

#define TASK1_PRIO 10
#define TASK2_PRIO 15
#define TASK3_PRIO 19
#define ROOT_PRIO  20

#define STACKSIZE 1024

unsigned long AppStack[APPSTACKSIZE];
OS_STK stack[STACKSIZE];
OS_STK stack1[STACKSIZE];
OS_STK stack2[STACKSIZE];
OS_STK stack3[STACKSIZE];

char getconfig;
int config;
int ms;
int s;
int m;



void *task_chrono() {  
  INT8U OS_result;
  OS_result = 0;
  
  
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
	OSTimeDly(10);	
  }
}

void *task_affichage(){

  INT8U OS_result;
  OS_result = 0;
  while(1){
    	printf("\rchrono : %02d:%02d:%03d", m, s, ms);
	OSTimeDly(10);	  
  } 
}

void *task_interface() {
  while(1) {
    getconfig = getchar();
    switch (getconfig){
    case 115: //s
      config = 1;
      printf("\n=============================\n");
      printf("Demarrage du chrono\n");
      printf("=============================\n");
      break;
    case 116: //t
      printf("\n=============================\n");
      printf("Stop du chrono\n");
      printf("chrono : %02d:%02d:%03d\n", m, s, ms);
      printf("=============================\n");
      config = 2;
      break;
    case 114: //r
      printf("\n=============================\n");
      printf("Remise a zero du chrono\n");
      printf("chrono : %02d:%02d:%03d\n", m, s, ms);
      printf("=============================\n");
      config = 3;
      break;
    default:
      //ne fait rien
      break;
    }
	OSTimeDly(5);	
  }
  pthread_exit(NULL);
}


/*
 * Root Task: main task
 */
void rootTask(void *arg) {
INT8U OS_result;

OS_result = 0;

if((OS_result = OSTaskCreateExt(task_chrono, 
				(void *)NULL, 
				&stack1[STACKSIZE-1], 
				TASK1_PRIO, 
				TASK1_PRIO, 
				&stack1[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task1 failed\n");

if ((OS_result = OSTaskCreateExt(task_affichage, 
				(void *)NULL, 
				&stack2[STACKSIZE-1], 
				TASK2_PRIO, 
				TASK2_PRIO, 
				&stack2[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task2 failed\n");
		
if ((OS_result = OSTaskCreateExt(task_interface, 
				(void *)NULL, 
				&stack3[STACKSIZE-1], 
				TASK3_PRIO, 
				TASK3_PRIO, 
				&stack3[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task3 failed\n");

while(1) {
	OSTimeDly(100);
}
}


int main() {
INT8U OS_result;

BSP_initLED();

OSInit();

printf("uC/OS II for BF537\n");

printf("=============================\n");
printf("Bienvenue mon gars suuuuuurrr\n");
printf("=============================\n");
  
if ((OS_result = OSTaskCreateExt(rootTask, 
				(void *)NULL, 
				&stack[STACKSIZE-1], 
				ROOT_PRIO, 
				ROOT_PRIO, 
				&stack[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt rootTask failed\n");

OSStart();

return(0);
}


/* app_init():
 * Called by OSInitHookEnd(void) in os_cpu_c.c
 */
void app_init(void) {

/* Initialization of tick timer */
BSP_CoreTmrInit();
}


/* register_handler_ex():
 * This function is called a few times from os_cpu_c.c.
 */
void register_handler_ex(int inum,void (*func)(void),int mode) {

switch(inum) {
	case 6:
		*pEVT6 = func;
		*pIMASK |= EVT_IVTMR;	
		break;
	case 14:
		*pEVT14 = func;
		*pIMASK |= EVT_IVG14;	
		break;
	default:
	      printf("ERROR: unexpected inum value\n");
}
}


int Cstart(void) {

main();

return(0);
}
