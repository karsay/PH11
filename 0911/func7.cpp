#include <stdio.h>

int loop2(int);

int main(void)
{
  int souwa;
  int x;
  x = 10;
  souwa = loop2(x);
  printf("1から%dまでの総和は%d",x,souwa);
  return 0;
}

int loop2(int n)
{
  int souwa = 0;
  int i = 0;
  while(i < n)
  {
    i++;
    souwa += i;
    
  }
  
  return souwa;
}