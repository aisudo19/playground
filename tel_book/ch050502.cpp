//lower_boundはソートされた範囲に対するアルゴリズムで、指定した値value以上の最初の要素のいt位置をイテレータで返す

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int A[14]  = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
  int *pos;
  int idx;

  pos = lower_bound(A, A + 14, 3);//配列Aの先頭ポインタとそこから14離れた場所ー末尾の指定(AがvectotならA.begon()/A.end()で指定)
  //valueが3なので3以上の要素のA[5](=4)を指すポインタがposに代入される

  idx = distance(A, pos);//distanceは２つのポインタの距離を返すのでAの先頭ポインタとpos(A[5])との距離を返す
  cout << "A[" << idx << "] =" << *pos << endl;//idx == 5/ *pos == 4

  pos = lower_bound(A, A + 14, 2);
  idx = distance(A, pos);
  cout << "A[" << idx << "] =" << *pos << endl;//idx == 2/ *pos == 2


}
