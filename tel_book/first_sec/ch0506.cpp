#include<iostream>
using namespace std;

#define MAX 10000
typedef long long llong;
int n, k;
llong T[MAX];

/*
1
Pを決めた時にk台以内で何個の荷物を積めるか求めるアルゴリズム
pを入力,v(積める荷物数)を返す　v=f(p)/O(n)

2
↑を使って０からp++してvがn以上になる最初のpを答える
０から順にPをP++：O(Pn)
二分探索：O(nlogP)←vはpに対して単調増加だから適用できる★
うんむ。vがソートされていたら対応するpもソートされているということka
*/

//最大積載量Pのk台のトラックで何個の荷物をつめるか？
int check(llong P){
  int i = 0;
  for(int j = 0; j < k; j++){//j台目
    llong s = 0;//sumを初期化
    while(s + T[i] <= P){//Pを超えるまで積んでいく
      s += T[i];
      i++;
      if(i == n) return n;//全部つめたよ
    }
  }
  return i;//i個目まで積めた
}

int slove(){
  llong left= 0;
  llong right = 100000 * 100000;//荷物の個数*一個あたりの最大重量
  llong　mid;
  while(right - left > 1){
    mid = (left + right) / 2;
    int v = check(mid); //mid　== Pを決めて何個積めるか✓している★
    if(v >= n) right = mid;
    else left = mid;
  }
  return right;
}

main(){
  cin >> n >> k;
  for(int i = 0; i < n; i++)cin >> T[i];
  llong ans = solve();
  cout << ans << endl;
}


//llongをララランドとよんでいるからlllongと書きがち
