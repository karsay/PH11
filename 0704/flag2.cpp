#include <stdio.h>

int main(void)
{
  int a;
  int b;
  int flg = 0;
  
  scanf("%d",&a);
  if(a == 0)
  {
    flg = 1;
  }
  scanf("%d",&b);
  
  while(flg == 0)    /* 上半分の描画 */
  {
    printf("%d", a+b);
    scanf("%d",&a);
    if(a == 0)
    {
    flg = 1;
    }
  scanf("%d",&b);
  }
  
  printf("end");
  
  
}