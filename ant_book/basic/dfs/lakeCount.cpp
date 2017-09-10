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

//DFSの回数なる！
int n,m;
char field[MAX_N][MAX_M+1];//フィールドn*m


void dfs(int x, int y){//現在位置
    field[x][y]='.';

    //移動する8方向のループ
    for(int dx=-1; dx<=1; dx++){
        for(int dy=-1; dy<=1; dy++){
            //移動後
            int nx=x+dx, ny=y+dy;
            if(0<=nx && nx<N && 0<=ny && ny<M && field[nx][ny]=='W')dfs(nx,ny);
        }
    }
    return;
}

void solve(){
    int cnt=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(field[i][j]=='W'){
                dfs(i,j);
                cnt++
            }
        }
    }
    printf("%d",cnt);
}

//orderN*M*8