/* 偶奇判定*/
#include <stdio.h>

int main(void)
{
  int x;
  printf("整数を入力してください");
  scanf("%d", &x);

  if(x % 2)
    puts("入力した整数は奇数ですね");
  else
    puts("入力した整数は偶数ですお")
  return 0;
}

/*
（内）は制御式というのだってさ！
*/
