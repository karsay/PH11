#include <stdio.h>

int main(void)
{
  int u[7];
  int i;
  int num;
  
  i = 0;
  
  while(i < 7)
  {
    scanf("%d", &num);
    u[i] = num;
    i++;
  }
  
  u[7] = 0;
  i = 0;
  
  while(i < 7)
  {
    u[7] = u[7] + u[i];
    i++;
  }
  
    printf("u[7]=%d\r\n",u[7]);
  
  return 0;
}