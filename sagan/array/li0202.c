#include <stdio.h>

int main(void)
{
  int i;
  int a[5] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);
  printf("%d", n);

  return 0;
}
