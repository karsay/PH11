#include <stdio.h>

int main(void)
{
  
  int n;  // n：入力を受ける変数（三角形の規模
  int n1;  // n1：入力を受ける変数(描画の種類を受け取る)
  int row;  // row：行のカウント
  int cnt;  // cnt：描画数のカウント用
  int psCnt;  // p：パスカル用カウント
  int minusCnt; // minusCnt:マイナス合わせ用カウント
  int minus; // minus：描画時のみ加算されたminusCntをcntから減算した比較用変数(空白描画するため数合わせ用の変数)
  
  /* -----対話部分のプログラム----- */
  printf("2以上16以下の2のべき乗の値を入力してください  =>");
  scanf("%d", &n);
  printf("\r\n");
  printf("描画するものを選択して下さい(1:パスカルの三角形 2:パスカルの三角形の性質 3:シェルピンスキーのギャスケット) =>");
  scanf("%d", &n1);

  /* -----空白部分の描画----- */
  for(row = 1; row < n + 1; row++)
  {
    for(cnt = 1; cnt < n - row + 1; cnt++)
    {
      printf("　"); 
    }
    
    minusCnt = 1; // 比較用変数を作るための変数初期化
    
    /* ------パスカルの三角形の描画------ */
    for(cnt = 1; cnt < row * 2; cnt++)
    {
      if(cnt % 2 == 1)  // cnt奇数時のみ描画
      {
        minus = cnt - minusCnt; // cntから描画時のみインクリメントされるminusCntを減算する */
        psCnt = 1;
        
        /* パスカルの三角形の計算部分のプログラム */
        for (int i = 1; i < minus + 1; i++)
        {
          psCnt = psCnt * (row - i) / i; 
          /* １行目は実行されなくすべて１になる 
          (例)４行目の場合
          1 * (4 - 1) / 1 = 出力3
          3 * (4 - 2) / 2 = 出力3
          3 * (4 - 3) / 3 = 出力1
          (例)5行目の場合
          1 * (5 - 1) / 1 = 出力4
          4 * (5 - 2) / 2 = 出力6
          6 * (5 - 3) / 3 = 出力4
          4 * (5 - 4) / 4 = 出力1
          */
        }
        
        /* -----描画種類選択部分のプログラム----- */
        switch (n1)
        {
          case 1: // パスカルの三角形の描画
            printf("%d", psCnt);
            break;
          
          case 2: // パスカルの三角形の性質の描画
            printf("%d", psCnt % n1); // 割った余りを表示させる
            break;
          
          case 3: // シェルピンスキーのギャスケットの描画
            if(psCnt % 2 == 1) // ２で割った余りが１の所に＊を打つとフラクタルな図形になる
            {
              printf("＊");
            }
            else
            {
              printf("　");
            }
            break;
          
          default: // ４以上か文字が入力されたとき
            printf("Error!!");
            break;
        }
        
        minusCnt++; // 描画時のみminusCntをインクリメント
        
      }
      else
      {
        printf("　"); // 偶数時の空白描画
      }
      
    }
    
    printf("\r\n"); // 改行の出力
    
  }
  
}