#include <iostream>
using namespace std;

int main(){
  int a;
  int &b = a;
  int &c = a;

  b = 1;

  cout << a << endl;

  c = 3;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

}
//参照わからん　あとで詳しく見る
