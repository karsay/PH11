#include <stdio.h>

int main(void)
{
  int i = 2;
  int f[20];
  
  f[0] = 1;
  f[1] = 1;
  while(i < 20)
  {
    f[i] = f[i-1] + f[i-2];
    i++;
  }
  
  for(i = 0; i < 20; i++)
  {
    printf("f[%d]=%d\r\n", i, f[i]);
  }
  
  return 0;
}