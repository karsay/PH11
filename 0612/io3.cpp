#include <stdio.h>

int main(void)
{
  
  int n,num;
  scanf("%d", &n);
  
  while(n > 0)
  {
    num = n;
    while(num > 0)
    {
      printf("*");
      num--;
    }
    
    printf("\r\n");
    n--;
    
  }
  
 }