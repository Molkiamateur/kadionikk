#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "cfg.h"
#include "cdefBF537.h"
#include "ucos_ii.h"
#include "bsp.h"


#define BLINK_PRIO (OS_LOWEST_PRIO-3)
#define ROOT_PRIO  (OS_LOWEST_PRIO-2)
#define COMMAND_PRIO 20

#define STACKSIZE 1024

#define PROMPT printf("ucos%% ")

void myscans(char *str);
void compute();
void cpu();
void uname();
void ps();
void spawn(INT8U i);
void kill(INT8U i);

unsigned long AppStack[APPSTACKSIZE];
OS_STK stack[STACKSIZE];
OS_STK stackblink[STACKSIZE];
OS_STK stacki[10][STACKSIZE];

char command[20];
char name_task[10];
INT8U num_task;

/*
 * Task Compute
 */
void taskCompute(void *arg) {
INT8U OS_result;

OS_result = 0;

while(1) {
	compute();
	OSTimeDly(1);
	}
}


/*
 * blink
 */
void blink(void *arg) {
INT8U OS_result;

OS_result = 0;

OSTaskNameSet(OS_PRIO_SELF, (INT8U *)"blink\t", &OS_result);

while(1) {
	BSP_toggleLED(6);
	OSTimeDly(100);
	}
}


/*
 * Root Task: main task
 */
void rootTask(void *arg) {
INT8U OS_result;

OS_result = 0;

OSStatInit(); 

OSTaskNameSet(OS_PRIO_SELF, (INT8U *)"rootTask", &OS_result);

if ((OS_result = OSTaskCreateExt(blink, 
				(void *)NULL, 
				&stackblink[STACKSIZE-1], 
				BLINK_PRIO, 
				BLINK_PRIO, 
				&stackblink[0], 
				STACKSIZE, 
				(void *)0, 
				OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR ))) {
		printf("OSTaskCreateExt blink failed\n");
}

while(1) {
	PROMPT;
	myscans(command);
	printf("\n");
	if(!strcmp(command,"uname")){
		uname();
	} else if(!strcmp(command,"cpu")){
		cpu();
	} else if(!strcmp(command,"ps")){
		ps();
	} else if(!strncmp(command,"spawn",5)){
		num_task = command[7];
		spawn(num_task);
	} else if(!strncmp(command,"kill",4)){
		num_task = command[6];
		kill(num_task);
	} else {
		printf("unknown command\n");
		}
	}
	OSTimeDly(5);
}



int main() {
INT8U OS_result;

OS_result = 0;

BSP_initLED();

OSInit();

printf("uC/OS II shell for BF537\n");

if ((OS_result = OSTaskCreateExt(rootTask, 
				(void *)NULL, 
				&stack[STACKSIZE-1], 
				ROOT_PRIO, 
				ROOT_PRIO, 
				&stack[0], 
				STACKSIZE, 
				(void *)0, 
				OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR )))
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


/*
 * myscans() : scan a string from serial port
 */
void myscans(char *str) {
char c;
int i;

i = 0;

while ((c = getchar()) != '\r') {
	putchar(c);
	str[i++] = (char)c;
}
str[i++] = '\0';
}


/*
 * compute() : function for wasting CPU time...
 */
void compute() {
float  x;
float  y;
float  angle;
float  radians;
INT8U ypos;
INT8U data;
int i;

data = 1;

for(i=0; i<100; i++) {
    ypos  = data + 8;
    angle = (float)(data * 36.0);
    radians = 2.0 * 3.141592 * angle / 360.0;
    x = cos(radians);
    y = sin(radians);
    if (angle >= 360.0) {
            angle /= 360.0;
    } else {
            angle +=   0.01;
    }
}
}

void cpu(){
	printf("%-15s%-15s%-15s\n","OSTaskCtr","OSCPUUsage","OSCtxSwCtr");
	OSCtxSwCtr = 0;
	OSTimeDly(100);
	printf("%-15d%-15d%-15d\n",OSTaskCtr,OSCPUUsage,OSCtxSwCtr);

}
void uname(){
	INT16U os_version;

	os_version = OSVersion();
	printf("v%01d.%02d\n",os_version/100,os_version%100);
}
	
void ps(){
	OS_TCB* pdata;
	printf("%-15s%-15s%-15s%-15s%-15s%-15s\n","task","priority","switch","total_mem","free","used");
	for(i = 0; i < 32; i++){
		if(OSTaskQuery(i, pdata)){
			printf("%-15s%-15s%-15s%-15s%-15s%-15s\n","task","priority","switch","total_mem","free","used");
		}
	}
}
void spawn(INT8U i){
	INT8U OS_result;

	OS_result = 0;
	name_task[0] = 't';
	name_task[1] = 'a';
	name_task[2] = 's';
	name_task[3] = 'k';
	name_task[4] = i + '0';
	name_task[5] = '\n';
	name_task[6] = '\0';
	
	OSTaskCreateExt(taskCompute,
				(void *)NULL, 
				&stacki[i][STACKSIZE-1], 
				i, 
				i, 
				&stacki[i][0], 
				STACKSIZE, 
				(void *)0, 
				OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR );
				
	OSTaskNameSet(i, (INT8U *)name_task, &OS_result);

}
void kill(INT8U i){
	OSTaskDel(i);
}


























