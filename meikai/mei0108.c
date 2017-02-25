/*
べき乗を求める関数
*/

#include <stdio.h>

double power(double x, int n){
  int i;
  double tmp = 1.0;
  for(i = 1; i <= n; i++){
    tmp *= x;
  }
  return tmp;
}

int main(void)
{
  double a;
  int b;

  a = 4.52;
  b = 3;

  printf("%2f\n", power(a, b));
  return 0;
}
