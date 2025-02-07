#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char in_name[10];
  int in_ten, w_goukei = 0;
  FILE *gf_pt;

  if((gf_pt = fopen("goukei.dat", "w+")) == NULL)
  {
    printf("file open error");
    exit(EXIT_FAILURE);
  }

  printf("データを入力して下さい（終了は^z） \n");
  rewind(stdin);
  while ((scanf("%s %d", in_name, &in_ten)) != EOF)
  {
    fprintf(gf_pt, "%-10s %3d", in_name, in_ten);
  }
  
  printf("\nデータを表示します。\n");
  rewind(gf_pt);
  while ((fscanf(gf_pt, "%10s %3d", in_name, &in_ten)) != EOF)
  {
    w_goukei += in_ten;
    printf("%-10s %3d\n", in_name, in_ten);
  }

  printf("          %4d\n", w_goukei);

  if (fclose(gf_pt) == EOF)
  {
    printf("file close error");
    exit(EXIT_FAILURE);
  }

  return 0;
  
}