#include <stdio.h>

int main(void)
{
  
  int n,row,cnt;
  scanf("%d", &n);
  
  while(row < n)
  {
    cnt = 1;
    while(cnt < n + 1)
    {
      printf("*");
      cnt++;
    }
    
    printf("\r\n");
    row++;
    
  }
  
 }