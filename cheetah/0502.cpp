#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class InterestingParty
{
public:
  int bestInvitation(vector<string> first, vector<string> secound){
    map<string, int> dic;

    for(int i=0; i<first.size; i++){
      //keyが趣味 候補全ての趣味をkeyへ代入して人数0で初期化
      dict[first[i]] = 0;
      dict[secound[i]] = 0;
    }

    for(int i=0; i<first.size; i++){
      dic[first[i]]++;
      dic[secound[i]]++;
    }

    int ans=0;
    map<string, int>::iterator it;
    for(it=dic.begin(); it!=dict.end(); it++){
      ans = max(ans, it->secound);
    }
    return ans;
  }
}

/*
mp を map オブジェクトとすると、mp.begin() で最初の要素へのイテレータを、mp.end() で最後の要素の次へのイテレータを取得できる。
要素はキーと値のペア（std::pair）のことで、キー・値それぞれを itr->first, itr->second で取得できる
*/
