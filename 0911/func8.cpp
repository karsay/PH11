#include <stdio.h>

int loop3(int,int);

int main(void)
{
  int souwa;
  int x = 5;
  int y = 8;
  souwa = loop3(x, y);
  printf("%dから%dまでの総和は%dです",x,y,souwa);
  return 0;
}

int loop3(int x,int y)
{
  int souwa = x;
  while(x < y)
  {
    x++;
    souwa += x;
  }
  return souwa;
}