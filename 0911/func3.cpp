#include <stdio.h>

void message();

int i;

int main(void)
{
  for(i = 1;i < 4; i++)
  {
    message();
  }
  return 0;
}

void message()
{
  printf("%Hello C 言語 %d回目の表示\n", i);
}