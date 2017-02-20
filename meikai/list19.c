/*
後置演算子を使って手短に表現
評価されたあとにデクリメントorインクリメントしている！！

問題　読み込まれた整数以下の偶数を表示（ただし正のみ）
*/
#include <stdio.h>

int main(void)
{
  int n = 2;
  int x;
  printf("自然数を入力");
  scanf("%d", &x);

  while(x > n){
    printf("%d", n += 2);
  }
  printf("\n");
  return 0;
}

/*一個多くでている気がします先生*/
