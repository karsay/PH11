#include <stdio.h>

int main(void)
{
  
  int max = 0;
  int i = 0;
  int t[10] = {24,56,17,38,72,49,6,39,85,11};
  
  while(i < 10)    /* 上半分の描画 */
  {
   
    
    if(max < t[i])
    {
      max = t[i];
    }
    
    i++;
  }
  
  printf("%d", max);
  
}