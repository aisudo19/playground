#include <string>
using namespace std;

class ThePalindrome
{
public:
  int find(string s){
    for(int i=s.size(); ;i++){//i全体の長さ
      bool flag = true;
      for(int j=0; j<s.size(); j++){//j追加の長さ
        //反対側の文字が存在し、かつ違う文字であればフラグ折る
        if((i-j-1) < s.size() && s[j] != s[i-j-1]){
          flag = false;
          break;
        }
      }
      if(flag) return i;
    }
  }
}
