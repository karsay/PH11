#include <stdio.h>

int gyou, kazu;

int main(void)
{
  gyou = 10;
  
  while(gyou > 1)
  {
    
    kazu = 1;
    
    while(kazu < gyou)
    {
      printf("%d",kazu);
      kazu++;
    }
    printf("\r\n");
    
    gyou--;
    
  }
  
}
 
