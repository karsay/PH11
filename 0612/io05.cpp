#include <stdio.h>

int main(void)
{
  
  int n,row,cnt; /* n 入力 row 行 cnt カウント用*/
  scanf("%d", &n); /* 入力を受け付ける */
  row = 1;
  
  while(row < n + 1)    /* 上半分の描画 */
  { 
    
    cnt = 0;
    
    while(cnt < n - row)  /* 空白部分の描画 */
    {
      printf("＋");
      cnt++;
    }
    
    cnt = 0;
    
    while(cnt < row * 2 - 1) /* アスタリスクの描画 */
    {
      printf("＊");
      cnt++;
    }
    
    printf("\r\n");
    row++;
    
  }
  
  /* rowがこの時点でn + 1持ってるので数合わせ */
  row = n - 1;
  
  while(0 < row)  /* 上半分の描画 */
  {
    
    cnt = 0;
    
    while(cnt < n - row)  /* 空白部分の描画 */
    {
      printf("＋");
      cnt++;
    }
    
    cnt = 0;
    
    while(cnt < row * 2 - 1)  /* アスタリスクの描画 */
    {
      printf("＊");
      cnt++;
    }
    printf("\r\n");
    
    row--;
    
  }
  
}