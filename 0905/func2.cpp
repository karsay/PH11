#include <stdio.h>

int kagen(int, int);

int wa, sa;

int main(void)
{
  int a = 26, b = 11;
  
  kagen(a, b);
  printf("%dと%dの和は%d,差は%dです\n",a, b, wa, sa);

  return 0;
}

void kagen(int x, int y)
{
  wa = x + y;
  sa = x - y;
}