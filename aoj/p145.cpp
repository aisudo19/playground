#include<iostream>
using namespace std;

int main(){
  bool cards[4][14];
  int n, rank;
  char suit;

  for(int s = 0; s < 4; s++){
    for(int r = 0; r < 14; r++){
      cards[s][r] = 0;           //初期化忘れないように！
    }
  }

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> suit >> rank;
    if(suit == 'S') cards[0][rank] = 1;
    if(suit == 'H') cards[1][rank] = 1;
    if(suit == 'C') cards[2][rank] = 1;
    if(suit == 'D') cards[3][rank] = 1;
  }

  for(int s = 0; s < 4; s++){
    for(int r = 0; r < 14; r++){
      if(cards[s][r]) continue;//足りないカード出力　非0(true)ならループ抜ける　カードあるので出力しない naruhodo
      if( s == 0) suit = 'S';
      if( s == 1) suit = 'H';
      if( s == 2) suit = 'C';
      if( s == 3) suit = 'D';
      cout << suit << " " << r << endl;
    }
  }
  return 0;
}
