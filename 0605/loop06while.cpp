#include <stdio.h>

int gyou, kazu;

void kakugyou_rtn(void)
{
  
  kazu = 0;
  while(kazu < 10)
  {
    printf("%d",kazu);
    kazu++;
  }
  
  printf("\r\n");
  
}

int main(void)
{
  gyou = 1;
  
  while(gyou < 4)
  {
    kakugyou_rtn();
    gyou++;
  }
  
}
 
