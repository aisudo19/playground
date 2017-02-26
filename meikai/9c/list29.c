/*
西暦年を入力するとオリンピックが開かれるか表示するプログラムを作成せよ。
ただし、オリンピックの開催を計算する部分は別の関数として作成せよ。
*/

#include <stdio.h>

int olympic(int year);

enum{
  OLYMPIC_NON,
  OLYMPIC_SUMMER,
  OLYMPIC_WINTER,
};

int main(void){
  int year, hold;

  scanf("%d", &year);
  hold = olympic(year);

  switch(hold){
  case OLYMPIC_NON:
    printf("開かれないよ\n");
    break;
  case OLYMPIC_SUMMER:
    printf("夏季五輪\n");
    break;
    case OLYMPIC_WINTER:
      printf("冬季五輪\n");
      break;
  }
}

int olympic(int year)
{
  if(year % 2 == 0){
    if(year % 4 == 0){
      return OLYMPIC_SUMMER;
    }else{
      return OLYMPIC_WINTER;
    }
  }else{
    return OLYMPIC_NON;
  }
}
