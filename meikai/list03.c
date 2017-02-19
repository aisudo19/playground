#include <stdio.h>

int main(void){
  int x = 3.14;
  printf("xの値は%d", x);
}

/*
初期化子に型が違うものを代入するとエラーになるよってやつ
list03.c:4:11: warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3 [-Wliteral-conversion]
  int x = 3.14;
      ~   ^~~~
1 warning generated.
*/
