#include <stdio.h>

int kazu, gyou;

void kakugyou_rtn()
{
  
  kazu = 1;
  while(kazu < gyou + 1)
  {
    printf("*");
    kazu++;
  }
  
  printf("\r\n");
  
}

int main(void)
{
  
  for(int gyou = 1;gyou < 6;gyou++)
  {
    for(int kazu = 1; kazu < 6; kazu++)
    {
      printf("*");
    }
    printf("\n\r");
  }
  
}
 
