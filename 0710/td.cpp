#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[10][5];
  int i;
  int j;
  
  i = 0;
  while(i < 10)
  {
    j = 0;
    while(j < 5)
    {
      t[i][j] = i;
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
    i = 0;
  while(i < 10)
  {
    j = 0;
    while(j < 5)
    {
      printf("% 3d",t[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}