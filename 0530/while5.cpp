#include <stdio.h>

int main(void)
{
  
  int dispNum;
  int countNum;
  
  countNum = 1;
  dispNum = 1;
  
  while(countNum != 10)
  {
    printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
    dispNum = dispNum * countNum;
    countNum++;
  }
  
  return 0;   //終了処理
  
}