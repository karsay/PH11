#include <stdio.h>

int main(void){
  
  char m1;
  char m2;
  char w;
  
  scanf("%c\r\n", &m1);
  scanf("%c", &m2);
  
  if(m1 > m2)
  {
    w = m1;
    m1 = m2;
    m2 = w;
  }
  
  while(m1 <= m2)
  {
    printf("%c" , m1);
    m1++;
  }
  
  return 0;
  
}