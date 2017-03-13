/*
1.000以下の素数列挙 No.3
nの平方根以下のいずれの素数でも割り切れない
*/
#include <stdio.h>

int main(void)
{
  int i, n;
  int prime[500];
  int pn = 0;
  unsigned long counter;

  prime[pn++] = 2;
  prime[pn++] = 3;

  for(n = 5; n <= 1000; n+= 2){
    int flag = 0;
    for(i = 1; counter++,prime[i] * prime[i] < n; i++){
      counter++;
      if(n % prime[i] == 0){
        flag = 1;
        break;
      }
    }
    if(!flag){
      prime[pn++] = n;
    }
  }
  for(i = 0; i < pn; i++){
    printf("%d\n", prime[i]);
  }
  printf("%lu\n", counter);
  return 0;
}
