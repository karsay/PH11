#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int day[12][31];
  int i;
  int j;
  int tuki;
  int hi;
  
  i = 0;
  while(i < 12)
  {
    i = 0;
    while(j < 31)
    {
      day[i][j] = 0;
      j++;
    }
    i++;
  }
  
  
  /*    printf("月を入力->\r\n");
    scanf("%d", &tuki);
    printf("組を入力->\r\n");
    scanf("%d", &kumi);
    printf("人数を入力->\r\n");
    scanf("%d", &ninzu);
  */
  
  
  //配列の中身を表示する
  i = 0;
  while(i < 12)
  {
    j = 0;
    while(j < 31)
    {
      printf("% 3d",day[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}