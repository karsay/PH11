#include <stdio.h>

void loop1(int);

int main(void)
{
  loop1(10);
  return 0;
}

void loop1(int n)
{
  while(n > 0)
  {
    printf("%d\t",n);
    n--;
  }
}