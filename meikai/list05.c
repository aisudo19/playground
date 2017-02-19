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

/*cast とかね！型変換だとさ。
第二章まで
*/
