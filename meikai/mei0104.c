/*
配列の全要素の並びを反転させる
*/

#include <stdio.h>

int main(void)
{
  int i;
  int x[7];

  for(i = 0; i < 7; i++){
    printf("%d:", i);
    scanf("%d", &x[i]);
  }
  for(i = 0; i < 3; i++){
    int tmp = x[i];
    x[i] = x[6 - i];
    x[6 - i] = tmp;
  }

  puts("反転したよ");

  for(i = 0; i < 7; i++){
    printf("%d:", x[i]);
  }
  return 0;
}
