/*
静的記憶域期間をもつオブジェクトの暗黙の初期化を確認
*/

#include <stdio.h>

int fx;//静的記憶域期間＆ファイル有効範囲

void func(void){
  static int sx = 0;//静的記憶域期間＆ブロック有効範囲
  int ax = 0;
  printf("%3d%3d%3d\n", ax++, sx++, fx++);//自動記憶域期間＆ブロック有効範囲
}

int main(void){
  int i;

  puts("ax sx fx");
  for(i = 0; i < 10; i++){
    func();
  }
}
/*
ax sx fx
  0  0  0
  0  1  1
  0  2  2
  0  3  3
  0  4  4
  0  5  5
  0  6  6
  0  7  7
  0  8  8
  0  9  9
*/
