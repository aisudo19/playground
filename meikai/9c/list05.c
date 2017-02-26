#include<stdio.h>

int main(void){
  int x, y, z;

  puts("２つの整数を入力してください");
  printf("整数1:"); scanf("%d", &x);
  printf("整数2:"); scanf("%d", &y);

  printf("それらの和は%dで積は%dです\n", x + y, x * y);
  printf("xの値はyの%f%%です\n", (double) y / x * 100);

  return 0;
}

/*cast型変換　第二章まで

0フラグ
最小フィールド幅
精度
変換指定子

やさしい
list05.c:11:40: warning: format specifies type 'int' but the argument has type 'double' [-Wformat]
  printf("xの値はyの%d%%です\n", (double) y / x * 100);
                    ~~           ^~~~~~~~~~~~~~~~~~~~
                    %f
*/
