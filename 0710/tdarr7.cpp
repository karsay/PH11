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
    j = 0;
    while(j < 31)
    {
      day[i][j] = 0;
      j++;
    }
    i++;
  }
  
  printf("月を入力->\r\n");
  scanf("%d", &tuki);
  
  while(tuki != 0)
  {
    printf("日を入力->\r\n");
    scanf("%d", &hi);
    day[tuki - 1][hi - 1]++;
    printf("月を入力->\r\n");
    scanf("%d", &tuki);
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
    printf("%d月",i + 1);
    while(j < 31)
    {
      printf("%d日:%d ",j + 1,day[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}