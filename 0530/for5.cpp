#include <stdio.h>

int main(void)

{
  
  int dispNum;
  dispNum = 1;
  
  for(int countNum = 1; countNum != 10; countNum++)
  {
    printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
    dispNum = dispNum * countNum;
  }
  
  return 0;   //終了処理
  
}