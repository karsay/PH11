#include <stdio.h>

void kasan(int, int);

int x;

int main(void)
{
  int a = 18, b = 31;
  int x = 20;
  
  kasan(a, b);
  printf("%dと%dの和は%dです\n",a, b, x);

  return 0;
}

void kasan(int a, int b)
{
  x = a + b;
}