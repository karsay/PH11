#include <stdio.h>

int main(void)
{
  
  int n,row,cnt;
  row = 1;
  scanf("%d", &n);
  
  while(row < n + 1)
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