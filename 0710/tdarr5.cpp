#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[9][9];
  int i;
  int j;
  
  i = 0;
  while(i < 9)
  {
    j = 0;
    while(j < 9)
    {
      t[i][j] = (i + 1) * (j + 1);
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
    i = 0;
  while(i < 9)
  {
    j = 0;
    while(j < 9)
    {
      printf("% 3d",t[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}