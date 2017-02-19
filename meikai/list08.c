/*絶対値判定*/

#include <stdio.h>

int main(void)
{
  int x;

  printf("整数を入力してちょ");
  scanf("%d\n", &x);

  if(x != 0)
    if(x > 0)
      printf("xの絶対値は%dです", x);
    else
      printf("xの絶対値は%dです", -x);
  else
    printf("xは0です");

  return 0;
}
