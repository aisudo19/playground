#include <stdio.h>

//配列出力
void trace(int A[], int N){
  int i;
  for(i = 0; i < N; i++){
    if(i > 0){
      printf(" ");//間空けたいな
    }
    printf("%d", A[i]);
  }
  printf("\n");
}

void insersionSort(int A[], int N){
  int i, j, v;
  for(i = 0; i < N; i++){
    j = i - 1;
    v = A[i];
    while(A[j] > v && j > 1){
      A[j+1] = A[j];
      j--;
    }
    A[j+1]= v;
    trace(A, N);
  }
}

int main(){
  int N,i,j;
  int A[100];

  scanf("%d", &N);
  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }

  trace(A,N);
  insersionSort(A,N);

  return 0;
}

/*
FOR：繰り返す回数
WHILE：比較条件or前条件後条件
*/
