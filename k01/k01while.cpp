#include <stdio.h>

int main(void)
{
  
  int countNum = 0;
  int sumNum = 0;
  
  while(countNum < 5)
  {
    sumNum = sumNum + 3;
    countNum++;
  }
  
  printf("変数sumNumの中身は(%d)です。\r\n", sumNum);
  
  return 0;   //終了処理
  
}