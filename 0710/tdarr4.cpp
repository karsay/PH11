#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[3][4];
  int i;
  int j;
  int n = 0;
  
  i = 0;
  while(i < 3)
  {
    j = 0;
    while(j < 4)
    {
      t[i][j] = i * 4 + j;
      n++;
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
    i = 0;
  while(i < 3)
  {
    j = 0;
    while(j < 4)
    {
      printf("% 3d",t[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
  
}