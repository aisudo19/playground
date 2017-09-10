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

//辞書順比較の性質的に貪欲法マッチ

int N;
char S[MAX_N + 1];

void solve(){
    int a=0, b=N-1;//a,bで最初・最後の(index)文字管理

    while (a<=b){
        bool left= false;
        for(int i=0; a+i<b; i++){
            if(S[a+i]<S[b-i]){
                left= true;
                break;
            }
            if(S[a+i]>S[b-i]){
                left= false;
                break;
            }
        }
        if(left) putchar(S[a++]);
        else putchar(S[b--]);
    }
    putchar('\n');
}