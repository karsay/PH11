#include <stdio.h>

int main(void){
  
  char word[50][10];
  int i, n;
  i = 0;
  
  scanf("%s", word[i]);
  
  while(word[i][0] != 0){
    i++;
    scanf("%s", word[i]);
  }
  
  n = i;
  
  while(i < n)
  {
    word[i][0] = word[i][0] - 32;
    printf("%s" , word[i]);
    printf("\r\n");
  }
  
  return 0;
  
}