#include <stdio.h>
#include <string.h>

int main(void){
  
  char w[20][10];
  char s;
  int i,j;
  
  i = 0;  
  
  scanf("%s", &w[i]);
  
  while(w[i] != "END")
  {
    i++;
    scanf("%s", &w[i]);
  }
  
  j = 0;
  
  while(j < i)
  {
    printf("%s",w[j]);
    j++;
  }
  
  return 0;
  
}