#include <stdio.h>

int main(void)
{
  int score = 0;
  int i;
  int t[30];  //配列宣言

  i = 0;
  
  while(i < 30)
  {
    t[i] = 999;
    i++;
  }
  
  int max = 0;
  int min = t[0];
  
  i = 0;
  
  while(i < 30 && score != 999)
  {
    printf("%d人目の回答＞",i + 1);
    scanf("%d", &score);
    t[i] = score;
    i++;
  }
  
  i = 0;
  
  while(t[i] != 999)
  {
    if(max < t[i])
    {
      max = t[i];
    }
    if(min > t[i])
    {
      min = t[i];
    }
    i++;
  }
  
  printf("%d  %d", max,min);
  
  return 0;
}