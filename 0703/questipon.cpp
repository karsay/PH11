#include <stdio.h>

int main(void)
{
  int ans;
  int i;
  int res[10];  //配列宣言
  int total[10];
  int cnt;
  
  i = 0;
  
  while(i < 10)
  {
    res[i] = 0;
    total[i] = 0;
    i++;
  }
  
  i = 0;
  ans = 999;
  
  
  while(i < 10 && ans != 0)
  {
    
    printf("%d人目の回答＞",i + 1);
    scanf("%d", &ans);
    res[i] = ans;
    i++;
    
  }
  
  i = 0;
  
  while(i < 10 && res[i] !=0)
  {
    total[res[i] - 1] += 1;
    total[9]++;
    i++;
  }
  
  i = 0;
  while(i < 9)
  {
    printf("アンケート結果%d:%d名\r\n", i + 1, total[i]);
    i++;
  }
  
  printf("アンケート回答人数:%d",total[9]);
  
  return 0;
}