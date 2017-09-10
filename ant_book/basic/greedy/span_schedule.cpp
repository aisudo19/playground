#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<stack>
#include<map>

using namespace std;

typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int, int>P;

//正しく貪欲
//簡単な証明

const int MAX_N = 100000;

int N,S[MAX_N],T[MAX_N];

P itv[MAX_N];

void solve(){

    for(int i=0; i<N; i++){//仕事をpairにする
        itv[i].first=T[i];
        itv[i].second=S[i];
    }
    sort(itv,itv+N);//終了時間の早い順でsort

    int ans=0, t=0;
    for(int i=0; i<N; i++){
        if(t<itv[i].second){//終了早い方からなめる
            ans++;
            t=itv[i].first;
        }
    }
    cout<<ans<<endl;
}