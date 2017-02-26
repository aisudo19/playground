/*3つの整数の最大値を求める*/
#include <stdio.h>

int main(void)
{
  int a, b, c, max;

  puts("3つの整数を入力");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  printf("整数c:"); scanf("%d", &c);
/*
  if (a > b) {
    if(a > c){
      max = a;
    }else{
      max = c;
    }
  }else{
    if(b > c){
      max = b;
    }else{
      max = c;
    }
  }
  */

  max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  printf("3つの整数のうち最大な整数は%d\n", max);

  return 0;
}
