#include <stdio.h>

int main(void)
{
//  ここから「繰り返し前処理」
  int dispNum;
  dispNum = 1;
  printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
//  ここまで「繰り返し前処理」
  while(dispNum < 5)
  {
//  ここから
    dispNum = dispNum + 1;
    printf("変数dispNumの中身は(%d)です。\r\n", dispNum);
//  ここまで「繰り返し処理」
  }
  
  return 0;   //終了処理
  
}