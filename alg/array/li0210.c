/*
1.000以下の素数列挙 No.2
n 奇数のみ / i 既に得られた素数のみで割ってみる

同解へのアルゴリズムは一つでない
高速なアルゴリズムはより多くの記憶領域を必要とする傾向がある
*/

#include <stdio.h>

int main(void)
{
  int i, n;
  int prime[500];//それまでの素数格納　偶数覗いているから500
  int pn = 0;//素数の数
  unsigned long counter = 0;//計算量

  prime[pn++] = 2;//pn[0] = 2

  for(n = 3; n <= 1000; n += 2;){//nは素数か？奇数のみ
    for(i = 1; i < pn; i++){//nまでの素数で割り切れるか？
      counter++;
      if(n%prime[i] == 0){//nがprime[i]で割切れたbreak;
        break;
      }
    }
    if(pn == i){//nまでの素数確かめた。（素数個分の配列をまわした
      prime[pn++] = n;//prime[]のケツにn(割り切れなかった)を挿入する
    }
  }
  for(i =0; i < pn; i++){
    printf("%d\n", prime[i]);
  }
  printf("%lu", counter);
  return 0;
}
