#include <stdio.h>

int main(void){
  
  char m = 'A';
  int i = 0;
  
  while(i < 26){
    printf("%c" , m+i);
    i++;
  }
  return 0;
}