#include <stdio.h>

int main(void)
{
  
  int n1,n2,num;
  int cnt = 0;
  scanf("%d", &n1);
  scanf("%d", &n2);
  
  while(cnt < n2)
  {
    num = 1;
    
    while(num < n1 + 1)
    {
      printf("%d", num);
      num++;
    }
    
    printf("\r\n", num);
    cnt++;
    
  }
  
 }