#include <stdio.h>

int main(void)
{
  int i = 0;
  int tbl[10];
  
  while(i < 10)
  {
    tbl[i] = i * 2 - 1;
    i++;
  }
  
  for(i = 0; i < 10; i++)
  {
    printf("tbl[%d]=%d\r\n", i, tbl[i]);
  }
  
  return 0;
}