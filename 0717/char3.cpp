#include <stdio.h>

int main(void){
  
  char m;
  
  scanf("%c", &m);
  
  while(m != 'Z'){
    printf("%c" , m+32);
    printf("\r\n");
    scanf("%c", &m);
  }
  return 0;
}