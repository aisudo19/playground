#include <vector>
#include <algorithm>
using namespace std;

class Cryptography{
public:
  long long encrypt(vector<int> numbers){
    long long ret = 1;
    sort(numbers.begin(), numbers.end());
    numbers[0]++;
    for(int i=0; i<numbers.size(); i++){
      ret *= numbers[i];
    }
    return ret;
  }
}
//積の増加率は足が1/n+1だから

/*
// 配列, array, vector を昇順にソートする
int a[N];
array<int,N> ar;
vector<int> v;

sort(a, a+N); // 配列
sort(ar.begin(), ar.end()); // array
sort(v.begin(), v.end()); // vector

*/
