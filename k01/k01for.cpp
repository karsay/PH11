#include <stdio.h>


int main(void)
{
  
  int sumNum = 0;
  
  for(int countNum = 0; countNum < 5; countNum++)
  {
    sumNum = sumNum + 3;
  }
  
  printf("変数sumNumの中身は(%d)です。\r\n", sumNum);
  
  return 0;   //終了処理
  
}