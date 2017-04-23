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
    while(A[j] > v && j >= 0){//j > 1
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
WHILE：比較条件or前条件後条件 条件分岐表現


j > 1  にしていてA[1],A[2]
MBP-49:tel_book akina$ ./a.out

3 7 5 6 1 9 7 3
3 7 5 6 1 9 7 3
3 7 5 6 1 9 7 3
3 7 5 6 1 9 7 3
3 7 5 6 1 9 7 3
3 7 1 5 6 9 7 3
3 7 1 5 6 9 7 3
3 7 1 5 6 7 9 3
3 7 1 3 5 6 7 9

*/
