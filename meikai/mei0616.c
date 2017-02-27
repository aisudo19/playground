#include<stdio.h>
void mat_add(const int a[4][3], const int b[4][3], int c[4][3]){
  int i, j;
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}
/*
多次元配列を受け取る関数は先頭の添字に相当するn次元の要素数が省略可能
それ末端の(n-1)次元の葉数は定数でないとあかん

受け取る配列の要素型が曖昧だめ　要素数は自由
*/

void fill(int[][3], int n, int v){
  int i,j;
  for(i = 0; i < n; i++){
    for (j = 0; j < 3, j++){
      m[i][j] = v;
    }
  }
}
