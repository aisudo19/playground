/*
C言語には全部で3つのループ文
while文、for文、、do～while文

do {
	繰り返す文;
} while (条件式);★

do～while文とwhile文の唯一の違いは、
条件式が、後判定であるか先判定であるか

◎繰り返し文が、必ず1回は実行される

Q円の面積
*/

#include <stdio.h>

int main(void)
{
  int r;
  double s;

  do{
    printf("半径？");
    scanf("%d", &r);
  }while(r < 0);

  s = r * r * 3.14;
  printf("面積は%fです\n", s);
  return 0;
}
