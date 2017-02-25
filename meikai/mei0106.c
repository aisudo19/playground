/*
学生の点数を読み込んで分布図
*/

#include <stdio.h>

#define NUM 80 /*上限設定*/

int main(void)
{
  int num;
  int score[NUM];
  int bunpu[11] = {0};
  int i, j;

  printf("人数を入力してください");
  do{
    scanf("%d", &num);
    if(num < 1 || num > NUM){
      printf("\a1~%dの範囲で入力してくれい", NUM);
    }
  }while(num < 1 || num > NUM);

  printf("%2d人の点数を入力してください\n", num);
  for(i = 0; i < num; i++){
    printf("%d人目:", i + 1);
    do{
      scanf("%d", &score[i]);
      if(score[i] < 0 || score[i] > 100){
        printf("100~0の範囲で入力してください");
      }
    }while(score[i] < 0 || score[i] > 100);
    bunpu[ score[i] / 10]++;
  }

  puts("\n------分布グラフ------");
  puts("  100:");
  for(j =0; j < bunpu[10]; j++){
    putchar('*');
  }
  for(i = 9; i >= 0; i--){
    printf("%2d~%2d:", i * 10, i * 10 + 9);
    for(j = 0; j < bunpu[i]; j++){
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
