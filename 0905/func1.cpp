#include <stdio.h>

int kasan(int, int);
double jozan(int, int);

int main(void)
{
  int a = 10, b = 3, wa;
  double shou;
  
  wa = kasan(a, b);
  shou = jozan(a, b);

  printf("%dと%dの和は%d,商は%.1fです\n",a, b, wa, shou);

  return 0;
}

int kasan(int x, int y)
{
  int z;
  z = x + y;
  return z;
}

double jozan(int a, int b)
{
  return (a / b);
}