#include <iostream>
#include <string>
using namespace std;

struct frame{
  bool is_first;
  int pin;
  bool plus;
} typedef frame;

frame updateFrame(bool is_first, int p) {
  frame f;

  if (f.is_first) {
    f.is_first = false;
    f.pin -= p;
    f.plus = false;
  } else {
    f.is_first = true;
    f.pin = 10;
    f.plus = false;
  }
  return f;
}

int main(){
  frame f;
  f.is_first = true;
  f.pin = 10;
  f.plus = false;

  string score;
  cin >> score;

  int sum = 0;
  for (int i = 0; i < score.size(); i++) {
    int p = (int)(score[i] - '0');
    // ストライク・スペアの処理
    // ガータも
    if('1' > score[i] && 9 < score[i]){
      if (score[i] == '-') {
        f = updateFrame(f.is_first, 0);
      } else if (score[i] == 'x') {
        if (f.is_first) {
          // strike
          f.plus = true;
        } else {
          // spair
        }
      }
    } else {
      sum += p;
      f = updateFrame(f.is_first, p);
    }
  }
  cout << sum << endl;
}
