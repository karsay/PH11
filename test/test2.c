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
    t[0][i];
    i++;
  }
  i = 0;
  while(i < 6)
  {
    t[i][0] = 1;
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