/*
直角三角形を描画
*/

#include <stdio.h>

int main(void)
{
  int i, j, len;
  printf("入力");
  scanf("%d", &len);

  for(i = 1; i <= len; i++){
    for(j = 1; j <= i; j++){
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
