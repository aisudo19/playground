/*1.000以下の素数列挙 No.1*/
#include <stdio.h>

int main(void)
{
  int i, n;
  unsigned long counter = 0;/*除算の回数*/

  for (n = 2; n <= 1000; n++){
    for(i = 2; i < n; i++){
      counter++;
      if(n % i == 0)
      break;
    }
    if(n == i){
      printf("%d\n", n);
    }
  }
  printf("counter:%lu\n", counter);
  return 0;
}
