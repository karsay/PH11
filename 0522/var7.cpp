#include <stdio.h>

int main(void)
{
    
  printf("compNum1の値を入力してください\n");
  int compNum1;
  scanf("%d", &compNum1);
  printf("入力された数値は：%d\n", compNum1);
  
  printf("compNum2の値を入力してください\n");
  int compNum2;
  scanf("%d", &compNum2);
  printf("入力された数値は：%d\n", compNum2);
  
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