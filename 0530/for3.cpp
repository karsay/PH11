#include <stdio.h>

int main(void)
{
  
  for(int dispNum = 1; dispNum < 11; dispNum++)
  {
    if(dispNum % 2 == 0)
    printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
  }
  
  return 0;   //終了処理
  
}