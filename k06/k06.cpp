#include <stdio.h>

int keisan(int, int);

int main(void)
{
  int i1,i2,i3;
  scanf("%d",&i1);
  scanf("%d",&i2);
  scanf("%d",&i3);
  
  printf("%d + %d = %d\n",i1,i2,keisan(i1,i2));
  printf("%d + %d = %d\n",i2,i3,keisan(i2,i3));
  printf("%d + %d = %d\n",i1,i3,keisan(i1,i3));
  return 0;
}

int keisan(int x,int y)
{
 // printf("%d + %d = %d\n",x,y,x+y);
  int ans = x+y;
  return ans;
}