#include <stdio.h>
#include <string.h>

int main(void){
  
  char w[10][30];
  char s;
  int i;
  
  i = 0; 
  while(i < 9)
  {
    scanf("%s", &w[i]);
    i++;
  }
  
  strcpy(w[9],w[0]);
  
  i = 1;
  
  while(i < 9)
  {
    s = strcmp(w[i], w[9]);
    if(0 > s)
    {
      strcpy(w[9],w[i]);
    }
    i++;s
  }
  
  printf("最小文字列：%s",w[9]);
  
  return 0;
  
}