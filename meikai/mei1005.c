#include <stdio.h>

void sum_diff (int n1, int n2, int *sum, int *diff){
  *sum = n1 + n2;
  *diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main (void){
  int x, y;
  int sum = 0; diff = 0;

  puts('input two numbers');
  printf("1:"); scanf("%d", &x);
  printf("2:"); scanf("%d", &y);

  sum_diff(x, y, &sum, &diff);

  printf("sum = %d, diff = %d", sum, diff);
  return 0;iu
}
