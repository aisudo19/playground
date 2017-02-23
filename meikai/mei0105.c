/*
最高点・最低点を表示
オブジェクト形式マクロで定義
*/

#include <stdio.h>

#define NUM 5

int main(void)
{
  int score[NUM];
  int min, max;
  int i;

  printf("%d人の点数をにゅーりょく\n", NUM);

  for(i = 0; i < NUM; i++){
    printf("%d:", i + 1);
    scanf("%d", &score[i]);
  }
  min = max = score[0];
  for(i = 0; i < NUM; i++){
    if(min > score[i]) min = score[i];
    if(max < score[i]) max = score[i];
  }
  printf("max:%d,min:%d\n", max, min);
  return 0;
}
