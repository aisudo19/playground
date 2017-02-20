/*
複合文に特有の変数はその複合文内で宣言して使用する

整数の合計と平均を算出する
*/
#include <stdio.h>

int main(void)
{
  int sum = 0;
  int cnt = 0;
  int retry;

  do{
    int x;

    printf("整数を打ち込んで下さい");
    scanf("%d", &x);

    sum = sum + x;
    cnt++;

    printf("まだ足しますか？【yes==1, no==0】");
    scanf("%d", &retry);
  } while (retry == 1);

  printf("合計は%d平均は%dです", sum, sum / cnt);
  return 0;
}
