/*分割統治法
最大値を求めるアルゴリズム
配列Aのl~rの範囲内にある要素の最大値を返す
findMaximum(A, l, r)
  m = (1+r)/2 //Divide
  if l == r-1//要素が一つ
    return A[l]
  else
    u = findMaximum(A, l, m)//前半の問題をsolve
    v = findMaximum(A, m, r)//後半の問題をsolve
    x = max(u,v)//conquer
  return x
*/

/*組み合わせを列挙する再帰関数
配列Sは0or1で成立する。S[i]==0のときi番目の整数を選択する/1はnot
iがnに達するとき、Sは組み合わせを保持し、0~2^n - 1通りのビット列が生成される

makeCombination()
  for iが0~n-1
    S[i] = 0 //iを選択しない
  rec(0)

rec(i)
  if iがnに達した
    print S
    return

rec(i+1)
S[i] = 1//iを選択する
rec(i+1)
S[i] = 0//iを選択しない
*/

/*整数が作れるかどうかを判定する再帰関数
与えられた整数が作れた時mは0を返す

(mが0より大きく)かつ(iがn以上になったとき)
または
(mが0より小さくなったとき)
与えられた整数は作られなかった

部分問題solve(i+1, m)かsolve(i+1, m-A[i])いずれかがtrueのとき元の問題slove(i,m)はtrueに
solve(i,m)
  if m == 0
    return true
  if i >= n
    return false
  res = solve(i+1, m) || solve(i+1, m-A[m])//m-A[m]なに？→それをひいた場合→遷移図！
  return res;
*/

#include<stdio.h>

int n, A[50];

//入力値のMから選んだ要素を引いていく再帰関数
int solve (int i, int m){
  if(m == 0)return 1;
  if(i >= n)return 0;
  int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
  return res;
}

int main(){
  int q, M,i;

  scanf("%d", &n);
  for(i = 0; i < n; i++)scanf("%d", &A[i]);
  scanf("%d", &q);
  for(i = 0; i < q; i++){
    scanf("%d", &M);
    if(solve(0,M))printf("yes\n");
    else printf("no");
  }

  return 0;
}
