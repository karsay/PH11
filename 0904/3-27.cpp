#include <stdio.h>

int main(void)
{

  int i, s;

  for(i = 1, s = 0; ; i++)
  {
    if(i % 2 == 0)
    {
      continue;
    }
    s += i;
    if(s >= 100)
    {
      break;
    }
  }

  printf("奇数の総和が100以上になるのは%dです。\n",i);

  return 0;
}