#include <vector>
#include <string>
using namespace std;

class InterestingParty
{
public:
  int bestInvitation(vector<string> first, vector<string> secound){
    int i, j;
    int ans = 0;
//逆になるほど。ちからわざすぎ
//全ての人の趣味２つづつ同じものを持つ人はいるかをカウントして最も多いもの==ans;
//iさんのときfrom0 toNまで回す→
    for(i=0; i<first.size(); i++){
      int f=0;//iさんの1個目の趣味が重なる人数
      int s=0;//iさんの2個目の趣味が重なる人数
      for(j=0; j<first.size(); j++){//iさんの趣味２つが重なり何個づつあるか
        if(first[i] == first[j]) f++;//必ずtrue first[j] != secound[i] なのでf++重なることはない　どちらかしかカウントされない
        if(first[i] == secound[j]) f++;
        if(secound[i] == first[j]) s++;
        if(secound[i] == secound[j]) s++;
      }
      ans = max(f, ans);
      ans = max(s, ans);
    }
    return ans;
  }
}
