/*図が分かりやすいよ
x = A[r]を基準に配列を分割する
parition(A, p, r)//A[p..r]
  x = A[r]//配列最後
  i = p-1//配列の先頭前から
  for j=p to r-1//先頭から配列最後前まで
    if (A[j] <= x){
      i++
      A[i]とA[j]交換
    }
  A[i+1]とA[r]を交換
  return i+1
*/
#include<stdio.h>
#define MAX 100000

int A[MAX], n;

int parition(int p, int r){
  int x, i, j, t;
  x = A[r];//基準設定
  i = p - 1;//以下部分のインデント初期設定
  for(j = p; j < r; j++){
    if(A[j] <= x){
      i++;
      t = A[i]; A[i] = A[j]; A[r] = t;
    }
  }
  t = A[i+1]; A[i+1] = A[r]; A[r] = t;
  return i+1;
}

int main(){
  int i, q;

  scanf("%d", &n);
  for(i = 0; i < n; i++) scanf("%d", &A[i]);

  q = parition(0, n-1);//Aと配列インデックス渡す
  for(i = 0; i < n; i++){//1 2 3 [p] 5 7の表記になるよう出力
    if(i) printf(" ");
    if(i == q)printf("[");
    printf("%d", A[i]);
    if(i == q)printf("]");
  }
  printf("\n");

  return 0;
}
