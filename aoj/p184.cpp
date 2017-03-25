#include<iostream>
#include<string>
using namespace std;

int main(){
  string str, cmd, p;
  int x, a, b,;

  cin >> str >> q;
  for(int t = 0; t < q; t++){
    cin >> cmd >> a >> b ;
    if(cmd == "print"){
      cout << str.substr(a, b-a+1) << endl;
    } else if(cmd =="reverse") {
      string tmp =str.substr(a, b-a+1);
      int n = tmp.size();
      for(int = i; i < n; i++) str[i+a] = tmp[n-i-1];
    } else if(cmd == "replace"){
      cin >> p;
      str = str.replace(a, b-a+1, p)
    }
  }
  return 0;
}
