#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);
  
  while(num < 50)
  {
    printf("%d\r\n", num);
    num++;
  }
  
}
