#include <stdio.h>

int main(void)
{
  int compNum;
  compNum = 5;
  if(compNum < 3)
  {
    // compNum < 3 の条件が成立したとき実行される
    printf("3はcompNumの値より大きいです。");
  }
  else
  {
    //compNum < 3 の条件が成立しなかったとき実行される
    printf("3はcompNumの値より大きくないです。");
  }
  
  return 0;
}