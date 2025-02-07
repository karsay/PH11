#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //ファイルポインタ宣言;
  int in_moji;
  FILE *filePt;
  
  if((filePt = fopen("gakusai.dat", "w+")) == NULL)
  {
    printf("open error");
    exit(EXIT_FAILURE);
  }
  
  printf("データを入力してください(終了は^Z) \n");
  rewind(stdin);
  while ((in_moji = getchar()) != EOF)
  {
    putc(in_moji,filePt);
  }
  
  printf("\nデータを表示します\n");
  rewind(filePt);
  while ((in_moji = getc(filePt)) != EOF)
  {
    putchar(in_moji);
  }

  //ファイルのクローズ
  if(fclose(filePt) == EOF)
  {
    printf("file close error");
    exit(EXIT_FAILURE);
  }

  return 0;
  
}