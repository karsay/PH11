#include <stdio.h>

int kazu, gyou;

int main(void)
{
  gyou = 0;
  
  for(int gyou = 1; gyou < 11; gyou++)
  {
    for(int kazu = 1; kazu < gyou; kazu++)
    {
      printf("%d",kazu);
    }
    printf("\r\n");
  }
  
}
 
