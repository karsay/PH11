#include <stdio.h>

int main(void){
  
  char word[50][10];
  int n,i;
  
  i = 0;
  
  scanf("%s", word[i]);
  
  
  while(word[i][0] != '0'){
    i++;
    scanf("%s", word[i]);
  }
  
  n = i;
  
  i = 0;
  
  while(i < n)
  {
    word[i][0] = word[i][0] - 32;
    printf("%s" , word[i]);
    printf("\r\n");
    i++;
  }
  
  return 0;
  
}