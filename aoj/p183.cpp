/*カードバトル*/
#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  string si, s2;//animal name
  int a = 0; b = 0;//score

  cin >> n;//count

  for(int i = 0; i < n; i++){
    cin >> si >> s2;
    if(s1 > s2)a += 3;
    else if (s1 < s2) b += 3;
    else{
      a++; b++;//draw
    }
  }
  cout << a << " " << b << endl;

  return 0;
}
