/*
入力された10個の数値を最後から表示するプログラムを作成せよ。
*/
#include <stdio.h>

int main(void)
{
  int array[10];
  int i;

  for(i = 0; i < 10; i++){
    printf("%d番目の数字を入力して下さい", i + 1);
    scanf("%d,", &array[i]);
  }
  for(i = 10; i >= 0; i--){
    printf("%d", array[i]);
  }
  return 0;
}
