/*
第五章復習
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
  int i, j;
  int sum;
  /*a,b 1次元配列要素数5でint型*/
  int a[SIZE];/*全要素不定理で初期化*/
  int b[SIZE] = {1, 2, 3};/*1,2,3,0,0,で初期化*/
  /*int[4][3]型の2次元配列*/
  int c[4][3] = {
    {11, 23, 41},
    {52, 52, 4},
    {11, 23, 41},
    {52, 52, 4},
  };

  for(i = 0; i < SIZE; i++){
    a[i] = b[i];
  }

  for(i = 0; i < 4; i++){
    for(j =0; j < 3; j++){
      printf("c[%d][%d] = %d\n", i, j, c[i][j]);
    }
  }
  return 0;
}
