#include <stdio.h>

int main(void)
{
  
  int dispNum;
  dispNum = 10;
  
  while(dispNum > 0)
  {
    printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
    dispNum--;
  }
  
  return 0;   //終了処理
  
}