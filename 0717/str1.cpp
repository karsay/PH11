#include <stdio.h>

int main(void){
  
  char m[10];
  int i = 0;
  
  scanf("%s", m);
  
  while(m[i] != '\0'){
    printf("%c" , m[i]);
    printf("\r\n");
    i++;
  }
  return 0;
}