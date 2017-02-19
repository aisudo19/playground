#include<stdio.h>

int main(void){
  int x, y;
  int z;

  puts("２つの整数を入力してください");
  printf("整数1:"); scanf("%d", &x);
  printf("整数2:"); scanf("%d", &y);

  z = x + y;
  printf("それらの和は%d\n", z);
}
