#include <stdio.h>

int gyou, cnt;

int main(void)
{
  gyou = 10;
  
  for(int gyou =10; gyou > 1; gyou--)
  {
    cnt = 1;

    for(cnt = 1; cnt < gyou; cnt++)
    {
      printf("%d",cnt);
    }
    printf("\r\n");
  }

}
 
