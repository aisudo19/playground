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

/*
int n, W;
int w[MAX_N], v[MAX_N];

//i番目が総和j以下になるように選ぶ
int rec (int i, int j){
    int res;
    if(i==n){
        //品物ない
        res=0;
    }else if(j<w[i]){
        //入らない
        res = rec(i+1,j);
    }else{
        //入れると入れない試したい
        rec=max(rec(i+1,j),rec(i+1, j-w[i])+v[i]);
    }
    return res;
}

void solve(){
    printf("%d", rec(0,W))
}
*/

/*
//メモ化テーブル
int dp[MAX_N+1][MAX_W+1];
int rec(int i, int j){
    if(dp[i][j]>=0){
        return dp[i][j];
    }
    int res;
    if(i==n){
        res=0;
    }else if(j<w[i]){
        res=rec(i+1,j);
    }else{
        res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
    }
    //テーブルにメモ
    return dp[i][j]=res;
}
void solve(){
    memoset(dp,-1, sizeof(dp));
    printf("%d",rec(0,W));
}
*/

int dp[MAX_N+1][MAX_W+1];//DPテーブル

void solve(){
    for(int i=n-1;i>=0;i--){
        for(int j=0; j<=W; j++){
            if(j<w[i]){//入らぬ
                dp[i][j]=dp[i+1][j];
            }else{//入れるか入れぬか・価値の大きい方
                dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    printf("%d",dp[0][W]);
}