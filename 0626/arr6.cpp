#include <stdio.h>

int main(void)
{
  int cnt;
  int num;
  int i;
  int t[50];  //配列宣言
  
  cnt = 0;
  scanf("%d", &num);
  
  while(num != 999 || cnt < 3)
  {
    t[cnt] = num;
    scanf("%d", &num);
    cnt++;
    
    if(cnt > 50)
    {
      break;
    }
    
  }
  
  for(i = 0; i < cnt; i++)
  {
    printf("t[%d]=%d\r\n", i, t[i]);
  }
  
  return 0;
}