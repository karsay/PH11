#include <stdio.h>

int num, row, cnt;

int main(void)
{
  
  for(int row = 1; row < 10; row++)
  {
    num = 1;
    for(int cnt = 1; cnt < row+1; cnt++)
    {
      num = num * cnt;
    }
    printf("%d!=%d \n\r", row, num);
  }
  
}
 
 
