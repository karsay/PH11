#include <stdio.h>

int num, row, cnt;

int main(void)
{
  
  row = 1;
  
  while(row < 10)
  {
    num = 1;
    cnt = 1;
    while(cnt < row + 1)
    {
      num = num * cnt;
      cnt++;
    }
    
    printf("%d!=%d \n\r", row, num);
    
    row++;
    
  }
  
}
 
 
