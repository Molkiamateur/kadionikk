#include <stdio.h>
#include "babbage.h"

#define TST_NBR 10
int main()
{
  int n;
  int hw_result[TST_NBR], sw_result[TST_NBR];
  int res;
  unsigned int err_cnt;
  int i;

  err_cnt = 0;

  // Software results
  n = 0;
  for (i=0; i<TST_NBR; i++) {
    res = 2*(n*n) + (3*n) + 5;
    sw_result[i] = res;
    n++;
  }

  // Call the DUT (hardware results)
  printf("Running DUT...");
  n = 0;
  for (i=0; i<TST_NBR; i++) {
    res = babbage(n);
    hw_result[i] = res;
    n++;
  }
  printf("done.\n");

  // Test the output against expected results
  printf("Testing DUT results...\n");
  for (i = 0; i < TST_NBR; i++) {
	  printf("\tDUT results: test=%d, DUT=%d, expected=%d\n", i, hw_result[i],sw_result[i]);
	  if (hw_result[i] != sw_result[i])
		  err_cnt++;
  }

  if (err_cnt) {
    printf("----------Fail!------------\n");
  }
  else {
    printf("----------Pass!------------\n");

  }
}
