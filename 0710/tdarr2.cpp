#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[5][6];
  int i;
  int j;
  
  i = 0;
  while(i < 5)
  {
    j = 0;
    while(j < 6)
    {
      t[i][j] = i + j;
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
    i = 0;
  while(i < 5)
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