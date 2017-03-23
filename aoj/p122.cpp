#include<iostream>
using namespace std;

int main(){
  int n;
  long long a;
  long long min = 1000000;//初期設定注意
  long long max = -1000000;
  long long sum = 0;

  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> a;
    if(a < min) min = a;
    if(a > max) max = a;
    sum += a;
  }
  std::cout << min << " " << max << " " << sum << '\n';

  return 0;
}
