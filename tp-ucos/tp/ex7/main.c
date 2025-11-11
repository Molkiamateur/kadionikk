#include <string.h>
#include <stdlib.h>
#include "cfg.h"
#include "cdefBF537.h"
#include "ucos_ii.h"
#include "bsp.h"

#define TASK1_PRIO 10
#define TASK2_PRIO 11
#define TASK3_PRIO 12
#define TASK4_PRIO 13
#define TASK5_PRIO 14

#define ROOT_PRIO  20

#define STACKSIZE 1024

unsigned long AppStack[APPSTACKSIZE];
OS_STK stack[STACKSIZE];
OS_STK stack1[STACKSIZE];
OS_STK stack2[STACKSIZE];
OS_STK stack3[STACKSIZE];
OS_STK stack4[STACKSIZE];
OS_STK stack5[STACKSIZE];

OS_EVENT *sem1;
OS_EVENT *sem2;
OS_EVENT *sem3;
OS_EVENT *sem4;
OS_EVENT *sem5;




/*
 * Task 1
 */
void task1(void *arg) {
INT8U OS_result;

INT16U val1;
INT16U val5;

OS_result = 0;


while(1) {
	val1 = OSSemAccept(sem1);
	val5 = OSSemAccept(sem5);
	if ((val1 == 1 ) && (val5 == 1 )){
		printf("task1 miam\n");
		BSP_setLED(1);
		OSTimeDly(100);
		BSP_clrLED(1);
		OSSemPost(sem1);
		OSSemPost(sem5);
		}
	else if (val1 == 0 && val5 != 0){
	 	OSSemPost(sem5);
	 	printf("task1 att 1\n");
	 	}
	else if (val5 == 0 && val1 != 0){
		OSSemPost(sem1);
		printf("task1 att 5\n");
		}
	else {
		printf("task1 att 1 et 5\n");
		}	
	printf("task1 1 : %d, 5 : %d\n", val1, val5);	
	OSTimeDly(101);	
	
	}
}

/*
 * Task 2
 */
void task2(void *arg) {
INT8U OS_result;

INT16U val1;
INT16U val2;

OS_result = 0;


while(1) {
	val1 = OSSemAccept(sem1);
	val2 = OSSemAccept(sem2);
	if ((val1 == 1) && (val2 == 1 )){
		printf("task1 miam\n");
		BSP_setLED(2);
		OSTimeDly(100);
		BSP_clrLED(2);
		OSSemPost(sem1);
		OSSemPost(sem2);
	}
	else if (val1 == 0 && val2 != 0){
	 	OSSemPost(sem2);
	 	printf("task2 att 1\n");
	 	}
	else if (val2 == 0 && val1 != 0){
		OSSemPost(sem1);
		printf("task2 att 2\n");
		}
	else {
		printf("task2 att 1 et 2\n");
	}		
	OSTimeDly(83);	
	}
}
/*
 * Task 3
 */
void task3(void *arg) {
INT8U OS_result;

INT16U val2;
INT16U val3;

OS_result = 0;


while(1) {
	val2 = OSSemAccept(sem2);
	val3 = OSSemAccept(sem3);
	if ((val2 == 1 ) && (val3 == 1 )){
		printf("task3 miam\n");
		BSP_setLED(3);
		OSTimeDly(100);
		BSP_clrLED(3);
		OSSemPost(sem2);
		OSSemPost(sem3);
	}
	else if (val2 == 0 && val3 != 0){
	 	OSSemPost(sem3);
	 	printf("task3 att 2\n");
	 	}
	else if (val3 == 0 && val2 != 0){
		OSSemPost(sem2);
		printf("task3 att 3\n");
		}
	else {
		printf("task3 att 2 et 3\n");
	}		
	printf("task3 2 : %d, 3 : %d\n", val2, val3);
	OSTimeDly(67);	
	}
}
/*
 * Task 4
 */
void task4(void *arg) {
INT8U OS_result;

INT16U val3;
INT16U val4;

OS_result = 0;


while(1) {
	val3 = OSSemAccept(sem3);
	val4 = OSSemAccept(sem4);
	if ((val3 == 1 ) && (val4 == 1 )){
		printf("task4 miam\n");
		BSP_setLED(4);
		OSTimeDly(100);
		BSP_clrLED(4);
		OSSemPost(sem3);
		OSSemPost(sem4);
	}
	else if (val3 == 0 && val4 != 0){
	 	OSSemPost(sem4);
	 	printf("task4 att 3\n");
	 	}
	else if (val4 == 0 && val3 != 0){
		OSSemPost(sem3);
		printf("task4 att 4\n");
		}
	else {
		printf("task4 att 3 et 4\n");
	}		
	printf("task4 3 : %d, 4 : %d\n", val3, val4);
	OSTimeDly(53);	
	}
}
/*
 * Task 5
 */
void task5(void *arg) {
INT8U OS_result;

INT16U val4;
INT16U val5;

OS_result = 0;


while(1) {
	val4 = OSSemAccept(sem4);
	val5 = OSSemAccept(sem5);
	if ((val4 == 1 ) && (val5 == 1 )){
		printf("task5 miam\n");
		BSP_setLED(5);
		OSTimeDly(100);
		BSP_clrLED(5);
		OSSemPost(sem4);
		OSSemPost(sem5);
	}
	else if (val4 == 0 && val5 != 0){
	 	OSSemPost(sem5);
	 	printf("task5 att 4\n");
	 	}
	else if (val5 == 0 && val4 != 0){
		OSSemPost(sem4);
		printf("task5 att 5\n");
		}
	else {
		printf("task5 att 4 et 5\n");
	}		
	OSTimeDly(37);	
	}
}
/*
 * Root Task: main task
 */
void rootTask(void *arg) {
INT8U OS_result;

OS_result = 0;

sem1 = OSSemCreate(1);
sem2 = OSSemCreate(1);
sem3 = OSSemCreate(1);
sem4 = OSSemCreate(1);
sem5 = OSSemCreate(1);

if((OS_result = OSTaskCreateExt(task1, 
				(void *)NULL, 
				&stack1[STACKSIZE-1], 
				TASK1_PRIO, 
				TASK1_PRIO, 
				&stack1[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task1 failed\n");

if ((OS_result = OSTaskCreateExt(task2, 
				(void *)NULL, 
				&stack2[STACKSIZE-1], 
				TASK2_PRIO, 
				TASK2_PRIO, 
				&stack2[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task2 failed\n");

if ((OS_result = OSTaskCreateExt(task3, 
				(void *)NULL, 
				&stack3[STACKSIZE-1], 
				TASK3_PRIO, 
				TASK3_PRIO, 
				&stack3[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task3 failed\n");
		
if ((OS_result = OSTaskCreateExt(task4, 
				(void *)NULL, 
				&stack4[STACKSIZE-1], 
				TASK4_PRIO, 
				TASK4_PRIO, 
				&stack4[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task4 failed\n");
		
if ((OS_result = OSTaskCreateExt(task5, 
				(void *)NULL, 
				&stack5[STACKSIZE-1], 
				TASK5_PRIO, 
				TASK5_PRIO, 
				&stack5[0], 
				STACKSIZE, 
				(void *)0, 
				0 )))
		printf("OSTaskCreateExt task5 failed\n");
while(1) {
	OSTimeDly(100);
}
}


int main() {
INT8U OS_result;

BSP_initLED();

OSInit();

printf("uC/OS II for BF537\n");

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
