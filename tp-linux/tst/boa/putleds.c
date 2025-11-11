#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "bcm2835.h"
#include "bcm2835.c"
#include "bsp.h"
#include "bsp.c"

void main()
{
  int value = 0;
  char *param;
  int fd;

  BSP_init();
  
  printf("HTTP/1.0 200 OK\n");
  printf("Content-type: text/html\n");
  printf("\n");

  param = getenv("QUERY_STRING");
  
  value = atoi(param);
  if(value)
	printf("%d\n", value);
   BSP_setLED(value);
}
