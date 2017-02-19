/* 約数判定*/
#include <stdio.h>

int main(void)
{
  int x, y;
  puts("２つの整数を入力してねん");
  printf("整数x");
  scanf("%d", &x);
  printf("整数y");
  scanf("%d", &y);

  if(y % x)
    printf("xはyの約数ではありません");
  else
    printf("xはyの約数でする");

  return 0;
}
