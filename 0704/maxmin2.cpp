#include <stdio.h>

int main(void)
{
  
  int hi = 0;
  int lo = 0;
  int t[10] = {24,56,17,38,72,49,6,39,85,11};
  int i = 0;
  
  while(i < 10)    /* 上半分の描画 */
  {
    if(t[hi] < t[i])
    {
      hi = i;
      
    }
    if(t[lo] > t[i])
    {
      lo = i;
    }
    i++;
  }
  
  printf("最小値は%d", t[lo]);
  printf("\r\n");
  printf("%d番目", lo + 1);
  printf("\r\n");
  printf("最大値は%d", t[hi]);
  printf("\r\n");
  printf("%d番目", hi + 1);
  
  
}