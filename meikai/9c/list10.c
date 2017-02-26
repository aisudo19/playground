/*条件演算子をつかう*/

#include <stdio.h>

int main(void)
{
  int a, b;
  puts("2つの整数を入力してちょ");
  printf("整数1"); scanf("%d", &a);
  printf("整数2"); scanf("%d", &b);
/*
  printf("それらの差は%dよ\n", (a > b) ? a - b : b - a);
*/
if(a > b)
  printf("それらの差は%dよ\n", a - b);
else
  printf("それらの差は%dよ\n", b - a);

return 0;
}
