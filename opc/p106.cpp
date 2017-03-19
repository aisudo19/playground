//入力回数が不明なので無限ループとbreak
#include<iostream>
using namespace std;

int main(){
  for(int x, t = 1; ; t++){//for文空の条件式true
    cin >> x;
    if(x == 0)break;//位置
    cout << "Case" << t << ": " << x << endl;
  }
  return 0;
}
