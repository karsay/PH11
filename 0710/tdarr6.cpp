#include <stdio.h>

int main(void)
{
  
  //配列宣言
  int nin[3][5];
  int i;
  int j;
  int cnt;
  int nen;
  int kumi;
  int ninzu;
  
  cnt = 0;
  while(cnt < 15)
  {
    printf("年を入力->\r\n");
    scanf("%d", &nen);
    printf("組を入力->\r\n");
    scanf("%d", &kumi);
    printf("人数を入力->\r\n");
    scanf("%d", &ninzu);
    
    nin[nen][kumi] = ninzu;
    
    cnt++;
  }
  
  //配列の中身を表示する
  i = 0;
  while(i < 3)
  {
    j = 0;
    while(j < 5)
    {
      printf("% 3d",nin[i][j]);
      j++;
    }
    printf("\r\n");
    i++;
  }
  
  return 0;
}