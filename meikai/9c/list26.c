/*
memori　8ビット　1バイト
全ての変数はメモリに作られて、番号をつけて区別している

*/

#include <stdio.h>

int main(void)
{
  int i1, i2, i3;
  printf("%p\n", &i1);
  printf("%p\n", &i2);
  printf("%p\n", &i3);

  return 0;
}

/*
結果 アドレス
0x7fff5c2a29f8
0x7fff5c2a29f4
0x7fff5c2a29f0

int型のサイズが4バイト

16^15 /8
*/
