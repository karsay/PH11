#include <stdio.h>
#include <string.h>

int main(void){
  
  char name[10];
  char m[10];
  int i = 0;
  int n;
  
  scanf("%s", &name[i]);
  
  while(name != "0")
  {
    scanf("%s", &name[i]);
    i++;
    scanf("%s", &name[i]);
  }
  
  n = i;
  i = 0;

  while(i < n)
  {
    strcpy(m,name[i]);
    strcat(m,name[i + 1]);
    printf("%s", m);
    i++;
  }
  
  return 0;
  
}