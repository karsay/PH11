#include <stdio.h>

int main(void)
{
  
  int n,row,cnt; /* n 入力 row 行 cnt カウント用*/
  scanf("%d", &n);
  row = 1;
  
  /* 入力の２倍回す */
  while(row < n * 2)
  {
    /* 上半分の描画 */
    if(row < n)
    {
      cnt = 1;
      
      while(cnt < row + 1)
      {
        printf("＊");
        cnt++;
      }
      printf("\r\n");
      row++;
    }
    else
    {
      /* 下半分の描画 */
      while(cnt > 0)
      {
        n = cnt;
        while(n > 0)
        {
          printf("＊");
          n--;
        }
        printf("\r\n");
        cnt--;
      }
      row++;
    }
    
  }
  
}