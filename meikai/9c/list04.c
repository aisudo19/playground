#include <stdio.h>

int main(void)
{
  int x, y, z, q;

  puts("３つの整数を代入してください");
  printf("first"); scanf("%d\n", &x);
  printf("secound"); scanf("%d\n", &y);
  printf("third"); scanf("%d\n", &z);

  q = x * y * z;
  printf("x=%d,y=%d,z=%d,q=%d\n", x, y, z, q);
  printf("それらの積は%d\n", q);

  return 0;
}
