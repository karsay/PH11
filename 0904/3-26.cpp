#include <stdio.h>

int main(void)
{

  int i = 1, s = 0;

  while(1)
  {
    s += i;
    if(s >= 100)
    {
      break;
    }
    i++;
  }

  printf("1からの総和が100以上になるのは%dです。\n",i);

  return 0;
}