#include <stdio.h>

int main(void)
{
  

  int i = 0;
  int t[10] = {24,56,17,38,72,49,6,39,85,11};
  int min = t[0];
  
  while(i < 10)    /* 上半分の描画 */
  {
    if(min > t[i])
    {
      min = t[i];
    }
    
    i++;
  }
  
  printf("%d", min);
  
}