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
  gyou = 1;
  
  printf("5 \n\r");
  
  while(gyou < 6)
  {
    kakugyou_rtn();
    gyou++;
  }
  
}
 
