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

const int V[6]={1,5,10,50,100,500};

int C[6];
int A;

void solve(){
    int ans=0;

    for(int i=5; i>=0; i--){
        int t = min(A/V[i],C[i]);//★min
        A -= t*V[i];
        ans += t;
    }
    cout<<ans<<endl;
}

