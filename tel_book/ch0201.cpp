#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main(){
  int n, R[MAX];

  cin >> n;
  for(int i = 0; i < n; i++) cin >> R[i];

  int maxv = -200000;
  int minv[0];

  for(int i = 0; i < R.size(); i++){
    maxv = max(maxv, R[i] - minv);
    minv = min(min, R[i]);
  }

  cout << maxv << endl;

  return 0;
}
