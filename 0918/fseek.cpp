#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  //ファイルポインタ宣言;
  char moji;
  FILE *md_fp;
  
  if((md_fp = fopen("moji_data.dat", "r+")) == NULL)
  {
    printf("open error");
    exit(EXIT_FAILURE);
  }
  
  while((moji = getc(md_fp)) != EOF)
  {
    if(isupper(moji))
    {
      fseek(md_fp, -1L, SEEK_CUR);
      putc(tolower(moji), md_fp);

      fseek(md_fp, 0L, SEEK_CUR);
    }
  }

  //ファイルのクローズ
  if(fclose(md_fp) == EOF)
  {
    printf("file close error");
    exit(EXIT_FAILURE);
  }

  return 0;
  
}