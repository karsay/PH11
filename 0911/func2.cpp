#include <stdio.h>

void message(int);


int main(void)
{
  for(int i = 1;i < 4; i++)
  {
    message(i);
  }
  return 0;
}

void message(int n)
{
  printf("%Hello C 言語 %d回目の表示\n", n);
}