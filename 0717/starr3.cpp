#include <stdio.h>
#include <string.h>

int main(void){
  
  char m[3][10];
  int i;
  int j;
  int top;
  int bot;
  int s;
  
  
  scanf("%s", &m[0]);
  scanf("%s", &m[1]);
  
  i = 0;  
  while(m[0][i] == m[1][i + 1] && m[i] != '\0')
  {
    i++;
  }
  
  s = m[i] - m[i + 1];
  //s = strcmp(m[i],m[i+1]);
  printf("%d",s);
  
  if(0 < s)
  {
    top = 0;
    bot = 1;
  }
  else
  {
    top = 1;
    bot = 0;
  }
  
  i = 0;
  
  while(m[top][i] != '\0')
  {
    m[2][i] = m[top][i];
    i++;
  }
  
  j = 0;
  while(m[bot][j] != '\0')
  {
    m[2][i+j] = m[bot][j];
    j++;
  }
  
  m[2][i + j] = '\0';
  
  j = 0;
  
  while(m[2][j] != '\0')
  {
    printf("%c",m[2][j]);
    j++;
  }
  
  return 0;
  
}