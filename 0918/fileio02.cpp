#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //ファイルポインタ宣言;
  char in_moji[80];
  FILE *filePt;
  
  if((filePt = fopen("gakusai.dat", "w+")) == NULL)
  {
    printf("open error");
    exit(EXIT_FAILURE);
  }
  
  printf("データを入力してください(終了は^Z) \n");
  rewind(stdin);
  while((scanf("%s", in_moji)) != EOF)
  {
    fputs(in_moji, filePt);
  }
  
  printf("\nデータを表示します\n");
  rewind(filePt);
  while ((fgets(in_moji, 80, filePt)) != NULL)
  {
    printf("%s\n", in_moji);
  }

  //ファイルのクローズ
  if(fclose(filePt) == EOF)
  {
    printf("file close error");
    exit(EXIT_FAILURE);
  }

  return 0;
  
}