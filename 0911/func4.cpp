#include <stdio.h>

void cond1(int);

int i;

int main(void)
{
  cond1(11);
  return 0;
}

void cond1(int n)
{
  if(n % 2 == 0)
  {
    printf("%dは偶数",n);
  }
  else
  {
    printf("%dは奇数",n);
  }
}