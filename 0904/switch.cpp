#include <stdio.h>

int main(void)
{
  int shiharai, maisuu;

  printf("支払い金額と割引券の枚数を入力して下さい:");

  scanf("%d   %d", &shiharai, &maisuu);

  switch (maisuu)
  {
    case 0: break;
    case 1: shiharai -= 100;
            break;
    case 2: shiharai -= 300;
            break;
    default:shiharai -= 1000;
            break;
  }
  printf("支払い金額は%d円です\n", shiharai);
  return 0;
}