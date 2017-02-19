/*簡易シグマ計算*/
#include <stdio.h>

 int main(void)
 {
   int max, min, sum;
   printf("最小値と最大値を,で区切って入力してください");
   scanf("%d, %d", &min, &max);

   sum = (min + max) * (max - min + 1) / 2;

   printf("%d〜%dの合計は%dです。\n", min, max, sum);
   return 0;
 }

/*
それまでは、仕方がないので、scanf関数を使い続けるしかありません。
*/
