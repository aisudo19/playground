/*
読み込んだ整数を逆から出力させる
*/
#include <stdio.h>

int main(void)
{
  int x;
  do{
    printf("正の整数を入力したまえ");
    scanf("%d", &x);
    if(x < 0){
      printf("あまのじゃく〜");
    }
  }while(x < 0);

  while(x > 0){
    printf("%d", x % 10);
    x /= 10;
  }
  return 0;
}

/*
おお無限ループにwwwwww
*/
