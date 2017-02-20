/*
二項演算子は二項比較しかできない
ex.等価演算子
*/

#include <stdio.h>

int main(void)
{
  int x, y, z;
  printf("３つの整数を,で区切って入力してください");
  scanf("%d,%d,%d", &x, &y, &z);
  if(x == y){
    if(x == z){
      printf("三変数は等価です");
    }else{
      printf("二変数が等価です");
    }
  }
  else{
    if(x == z){
      printf("二変数は等価です");
    }else{
      printf("三変数は異なります");
    }
  }
  return 0;
}

/*
せめてmsgで代入してprintfくらいはまとめたかったんだけれどこうなった。文字列扱い確認

MBA:meikai akina$ gcc list17.c
list17.c:16:11: warning: incompatible pointer to integer conversion assigning to 'char' from
      'char [25]' [-Wint-conversion]
      msg = "三変数は等価です";
          ^ ~~~~~~~~~~~~~~~~~~
list17.c:18:11: warning: incompatible pointer to integer conversion assigning to 'char' from
      'char [25]' [-Wint-conversion]
      msg = "二変数が等価です";
          ^ ~~~~~~~~~~~~~~~~~~
list17.c:23:11: warning: incompatible pointer to integer conversion assigning to 'char' from
      'char [25]' [-Wint-conversion]
      msg = "二変数は等価です";
          ^ ~~~~~~~~~~~~~~~~~~
list17.c:25:11: warning: incompatible pointer to integer conversion assigning to 'char' from
      'char [28]' [-Wint-conversion]
      msg = "三変数は異なります";
          ^ ~~~~~~~~~~~~~~~~~~~~
4 warnings generated.

*/
