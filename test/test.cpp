#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[4][5];
  int i;
  int j;
  int n = 20;
  
  i = 0;
  while(i < 4)
  {
    j = 0;
    while(j < 5)
    {
      t[i][j] = n;
      n--;
      j++;
    }
    i++;
  }
  
  //配列の中身を表示する
  i = 0;
  while(i < 4)
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