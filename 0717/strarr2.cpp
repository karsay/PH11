#include <stdio.h>
#include <string.h>

int main(void){
  
  char name[10][10];
  char m[10];
  int n,i;
  
  i = 0;
  
  scanf("%s", &name[i]);
  
  
  while(name[i][0] != '0')
  {
    scanf("%s", &name[i + 1]);
    i += 2;
    scanf("%s", &name[i]);
  }
  
  n = i;
  i = 0;
  
  while(i < n)
  
  {
    strcpy(m,name[i]);
    strcat(m,name[i+1]);
    printf("%s\r\n", m);
    i+=2;
  }
  
  return 0;
  
}