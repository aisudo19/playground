/*
sort!
計算量と安定性
データ列を保持する一つのメモリ以外にめもりが必要にならないか
入力データの特徴が計算量に影響しないか
*/

#include<stdio.h>

//出力
void trace(int A[], int N){
  int i;
  for(i = 0; i < N; i++){
    if(i > 0) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}

//挿入ソート
void insertionSort (int A[], int N){
  int j, i, t;
  for(i = 1; i < N; i++){
    t = A[i];
    j = i -1;
    while(j >= 0 && A[j] > t){
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = t;
    trace(A,N);
  }
}

int main(){
  int N, i, j;
  int A[100];

  scanf(%d, &N);
  for(i = 0; i < N; i++) scanf("%d", &A[i]);

  trace(A, N);
  insertionSort(A,N);

  return 0;
}
