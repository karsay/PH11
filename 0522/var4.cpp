#include <stdio.h>

int main(void)
{
  int compNum;
  compNum = 3;
  if(compNum < 3)
  {
    // compNum < 3 の条件が成立したとき実行される
    printf("3はcompNum(%d)の値より大きいです。", compNum);
  }
  else if(compNum == 3)
  {
    // compNum == 3の条件が成立したとき実行される
    printf("3はcompNumの値(%d)と等しいです。", compNum);
  }
  else
  {
    //compNum < 3 の条件が成立しなかったとき実行される
    printf("3はcompNum(%d)の値より大きくないです。",compNum);
  }
  
  return 0;
}