#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d",&num);
  int mul = 1;
  int cnt = 0;
  int flg = 0;
  
  while(flg == 0)    /* 上半分の描画 */
  {
    mul = num * mul;
    cnt++;
    if(mul > 1000)
    {
      flg = 1;
    }
    
  }
  
  printf("%d",cnt);
  
  
}