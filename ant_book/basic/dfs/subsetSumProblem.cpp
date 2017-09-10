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

int n,k;
int a[MAX_N];

//iは深さ
bool dfs(int i, int sum){
    if(i==n)return sum==k;//全て選択完了

    if(dfs(i+1,sum))return true;

    if(dfs(i+1,sum+a[i]))return true;

    return false;
}

int main() {
    if(dfs(0,0))printf("Yes\n");
    else printf("No\n");
    return 0;
}

//n^2