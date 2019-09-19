#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //ファイルポインタ宣言
  char fileName[10];
  FILE *filePt;
  
  //ファイルオープン
  //ファイル名test.txt
  //モード r
  filePt = fopen("test.txt", "r");

  //正しくオープンできたか確認
  if(filePt == NULL)
  {
    printf("open error");
    exit(EXIT_FAILURE);
  }
  
  //ファイルのクローズ
  if(fclose(filePt) == EOF)
  {
    printf("file close error");
    exit(EXIT_FAILURE);
  }

}