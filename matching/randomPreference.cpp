#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<stdio.h>
#include<queue>
#include<stack>

using namespace std;

typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
ll N;

int main(){
    ll i,j;
    cin>>N;
    vector< vector<ll> > prefer(N*2, vector<ll>(N));
    for(i=0; i<N*2; i++){
        for(j=0; j<N; j++){
            prefer[i][j]=j;
        }
        random_shuffle(prefer[i].begin(),prefer[i].end());
    }


    for(i=0; i<N*2; i++){
        for(j=0; j<N; j++){
            cout<<prefer[i][j];
        }
        cout<<endl;
    }
    cout<<"test"<<prefer[3][1]<<endl;

}