/*
指定された分の整数を読み込み合計と平均を出す
★初期化わすれていたから変な数字になった
*/
#include <stdio.h>

int main()
{
  int a, i tmp;
  int sum = 0;

  printf("なんこ？");
  scanf("%d", &a);
/*
  for(i = 0; i < a; i++){
    int b;

    printf("%d個目の整数を入力してください", i);
    scanf("%d", &b);

    sum += b;
  }
*/
  while(i <num){
    printf("NO.%d", ++i);
    scanf("%d", &tmp);
    sum += tmp;
  }


  printf("合計は%d、平均は%f", sum, (double)sum / sum);

}
