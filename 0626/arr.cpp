#include <stdio.h>

int main(void)
{
  int cnt;
  int score;
  int sum;
  int i;
  int avg;
  int t[100];  //配列宣言
  
  cnt = 0;
  scanf("%d", &score);
  
  while(score != 999)
  {
    t[cnt] = score;
    cnt++;
    scanf("%d", &score);
  }
  
  sum = 0;
  i = 0;
  
  while(i < cnt)
  {
    sum = sum + t[i];
    i++;
  }
  
  avg = sum / cnt;
  
  printf("%d", avg);
  
  return 0;
}