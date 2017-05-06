#include <string>
#include <vector>

using namespace std;

class FreindScore{
public:
  int highestScore(vector<string> friends){
    int ans = 0;
    int n = friends[0].length();

    for(int i = 0; i < n; i++){
      int cnt = 0;

      //iの友達数
      for(int j = 0; j < n; j++){//iとjは友達か？
        if(i == j) continue;
        if(friends[i][j] == 'Y'){
          cnt++;// jは友達
        } else {
          for(int k = 0; k < n; k++){
            if(friends[j][k] == 'Y'
               && friends[k][i] == 'Y'){
                 cnt++;//jは友達の友達
                 break:
            }
          }
        }
      }


      ans = Math.max(ans, cnt)//最大のiさんをansに代入
    }
    return ans;
  }
}
