#include <stdio.h>

void j_heikin(int);

int i = 0;

int main(void)
{
  int n;
  int tmp = 0;
  printf("数値を複数入力してください(終了は999)\n");
  
  scanf("%d", &n);
  while(n != 999)
  {
    tmp += n;
    i++;
    scanf("%d",&n);
  }
  
  j_heikin(tmp);
  
  return 0;
  
}

void j_heikin(int x)
{
  printf("入力された数字の平均は%dです\n",x / i);
}