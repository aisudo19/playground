#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<stack>

using namespace std;
typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;

#define all(c) (c).begin(), (c).end()


int main(){
    vector<int> vec(10);
    for(int i=0; i<vec.size(); i++){
        vec[i]=(10*i+3)%14//適当初期化
    }
    cout<<"ソート以前";
    for(int i=0; i<vec.size(); i++)cout<<vec[i]<<endl;

    sort(vec.begin(),vec.end());
    cout<<"ソート後";
    for(int i=0; i<vec.size(); i++)cout<<vec[i]<<endl;
    


    cout << *lower_bound(vec.begin(), vec.end(), 3) << endl; // => 3
  // vec.begin()で戻り値のイテレータを引けば配列の何番目かがわかる
    cout << (upper_bound(vec.begin(), vec.end(), 11) - vec.begin()) << endl; // => 8

  // all
    cout << "3の個数: " << count(all(vec), 9) << endl; // => 3の個数: 2

    return 0;

}