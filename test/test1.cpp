#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int t[10];
  int i;
  int j;
  
  i = 0;
  while(i < 10)
  {
    t[i] = 1;
    i++;
  }
  
  i = 0;
  while(i < 10)
  {
    printf("%d ", t[i]);
    i++;
  }
  printf("\r\n");
  
  i = 0;
  while(i < 10)
  {
    t[i + 1] = t[i]+t[i+1];
    i++;
  }
  
  //配列の中身を表示する
  i = 0;
  while(i < 10)
  {
    printf("%d ", t[i]);
    i++;
  }
  
  return 0;
}