#include <stdio.h>

int main(void){
  
  char m;
  
  scanf("%c" , &m);
  while(m <= 'Z'){
    printf("%c" , m);
    m++;
  }
  return 0;
}