/*
ループの回数がわからない場合は、条件式だけのwhile文が便利
ねずみ算
*/

/*
初期化;
while (条件式) {
　　繰り返す文;
　　更新;　★
}
for (初期化;条件式;更新) {
	繰り返す文;
}

慣習として、for文は定数回のループに使用し、
while文は、そうではないループに使用することがほとんどです。

*/

#include <stdio.h>

int main(void)
{
  /*16ビットコンパイラの LSI-C86 ではint型では百万を記憶出来ない*/
  double money = 1;
  int month = 1;

  while(money < 1000000){
    printf("%02dヶ月目:%7.0f円\n", month, money);
    money *=2;
    month++;
  }
  return 0;
}
