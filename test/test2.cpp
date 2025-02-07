#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[6][6];
  int i;
  int j;
  
  //初期値設定
  i = 0;
  while(i < 6)
  {
    j = 0;
    while(j < 6)
    {
      t[i][j] = 0;
      j++;
    }
    i++;
  }
  i = 0;
  while(i < 6)
  {
    t[0][i] = 1;
    i++;
  }
  i = 0;
  while(i < 6)
  {
    t[i][0] = 1;
    i++;
  }
  
  //パスカルの計算
  i = 1;
  while(i < 6)
  {
    j = 1;
    while(j < 6)
    {
      t[i][j] = t[i - 1][j] + t[i][j - 1];
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
  i = 0;
  while(i < 6)
  {
    j = 0;
    while(j < 6)
    {
      printf("% 3d",t[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}