#include <stdio.h>

int main(void)
{
  int flg = 0;
  int a;
  int b;
  int c;
  int sa;
  while(flg == 0)
  {
    printf("数字を降順に入力");
    printf("\r\n");
    a = 0;
    b = 0;
    c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if(a > b)
    {
      flg = 1; 
    }
    if(b < c)
    {
      flg = 0;
    }
  }
  
  sa = a - b;
  printf("1番目と２番目の差%d\r\n",sa);
  
  sa = b - c;
  printf("2番目と3番目の差%d\r\n",sa);
  

  
  return 0;
}