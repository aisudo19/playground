#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main(){
  int n, R[MAX];

  cin >> n;
  for(int i = 0; i < n; i++) cin >> R[i];

  int maxv = -200000;
  int minv = R[0]

  for(int i = 0; i < R.size(); i++){//ここで毎回R[i]をよみこめば配列は不要
    maxv = max(maxv, R[i] - minv);
    minv = min(min, R[i]);//これまでの最小値を保持
  }

  cout << maxv << endl;

  return 0;
}
/*
nに関する二重ループで実装O(n^2)の素朴アルゴリズムをひとつのループで完結するO(n)に改良
入力に配列を保持する必要もなくなりメモリ使用量改良
*/
