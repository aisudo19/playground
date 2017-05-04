#include <vector>
using namespace std;

class InterestingDigits
{
public:
  vector <int> digits(int base){
    vector <int> ans;

    for(int n=2; n<base; n++){//基数
      bool ok = true;
      for(int c=0; a<base; a++){
        for(int b=0; b <base; b++){
          for(int a=0; c<base; c++){
            if((c + b*base + a*base*base) % n == 0 && (c+b+a) % n != 0){
              //nの倍数で各桁の和がnの倍数でなければこのnを排除する
              //→nの倍数&&各桁和がnを残す
              //nの倍数でも各桁和の倍数でもないものはじょがいできているのか??
              ok = false;
              break;
            }
          }
          if(!ok) break;
        }
        if(!ok) break;
      }
      if(ok) ans.push_back(n);
    }
    return ans;
  }
}

//表記abcを考える
//nの倍数になっているかどうかを調べる。nを決定する
//対象となる数字を全探索
//c(ひとけた目)決定
//b決定
//a決定
//反例がでないものを返す
