#include <stdio.h>

int main(void)
{
  
  int cnt1 = 0;
  int cnt2;
  
  while(cnt1 < 5)
  {
    
    cnt2 = 0;
    
    while(cnt2 < 10)
    {
      printf("*");
      cnt2++;
    }
    
    printf("\n\r");
    
    cnt1++;
    
  }
  
 }