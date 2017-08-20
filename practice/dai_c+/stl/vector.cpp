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

int main(){
    vector<int> vec(5,0)//要素数・初期化
    for(int i=0; i<vec.size(); i++){
        vec[i]=i*2;//0,2,4,6,8
    }
    vec[2]=100;
    vec.push_back(999);

    vec.insert(vec.begin()+3, 5555)//vec[3]四番目の要素直前に追加
    vec.erase(vec.begin()+1);//vec[1]消す

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}

/*イテレータ

vector<int> vec(10,0);
*(vec.begin() + 3) = 999;
vec[5] = 6666;
cout << vec[3] << endl; // => 999
cout << *(vec.begin() + 5) << endl; // => 6666//←ここだけ押さえる

///////

int arr[10];
*(arr + 3) = 999;
arr[5] = 6666;
cout << arr[3] << endl; // => 999
cout << *(arr + 5) << endl; // => 6666


*/