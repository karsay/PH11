#include <stdio.h>

int main(void)
{
  int compNum1;
  int compNum2;
  compNum1 = 3;
  compNum2 = 3;
  
  if(compNum1 < compNum2)
  {
    // compNum < compNum2 の条件が成立したとき実行される
    printf("compNum2(%d)はcompNum(%d)の値より大きいです。", compNum2,compNum1);
  }
  else if(compNum1 == compNum2)
  {
    // compNum == compNum2の条件が成立したとき実行される
    printf("compNum2(%d)はcompNumの値(%d)と等しいです。", compNum2,compNum1);
  }
  else
  {
    //compNum < compNum2 の条件が成立しなかったとき実行される
    printf("compNum2(%d)はcompNum(%d)の値より大きくないです。",compNum2,compNum1);
  }
  
  return 0;
  
}