#include <stdio.h>

int main(void)
{
  
  int countNum;
  int sumNum;
  
  countNum = 0;
  sumNum = 0;
  
  while(countNum < 5)
  {
    sumNum = sumNum + 3;
    countNum++;
  }
  
  return 0;   //終了処理
  
}