#include <stdio.h>

int cond2(int);

int i;
int x;

int main(void)
{
  int i = 6;
  x = cond2(i);
  if(x % 2 == 0)
  {
    printf("%dは偶数", i);
  } 
  else 
  {
    printf("%dは奇数", i);
  }
  return 0;
}

int cond2(int n)
{
  if(n % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}