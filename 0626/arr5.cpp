#include <stdio.h>

int main(void)
{
  int i = 0;
  int t[10];
  int n;
  
  while(i < 10)
  {
    scanf("%d", &n);
    t[i] = n;
    i++;
  }
  
  for(i = 0; i < 10; i++)
  {
    printf("t[%d]=%d\r\n", i, t[i]);
  }
  
  return 0;
}