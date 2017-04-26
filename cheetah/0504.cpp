#include <vector>
using namespace std;

class Cryptography
{
public:
  long long encrypt(vector<int> numbers){
    long long answer = 0;

    for(int j=0; j<numbers.size(); i++){
      long long seki;
      for(int j=0; j<numbers.size(); i++){
        if(i==j){
          seki *= (numbers[j] + 1);//numbers[i]に1足してループを回す
        } else {
          seki *= numbers[j];
        }
      }
      ans = max(ans, seki)//iのうち最大をkeep
    }
    return ans;
  }
}
