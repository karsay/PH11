#include <stdio.h>

int kazu, gyou;

void kakugyou_rtn(void)
{
  
  kazu = 1;
  while(kazu < gyou + 1)
  {
    printf("%d",kazu);
    kazu++;
  }
  
  printf("\r\n");
  
}

int main(void)
{
  gyou = 0;
  
  while(gyou < 10)
  {
    kakugyou_rtn();
    gyou++;
  }
  
}
 
