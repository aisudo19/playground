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

//bfs状態の表現
//d[n][m]最短距離とフラグ&&INFを同様扱い
//でqueuをどうするのか

const int INF=100000000;

typedef pair<int, int>P;

char maze[MAX_N][MAX_M];
int d[MAX_N][MAX_M];
int N,M;
int sx,sy;
int gx,gy;

int dx[4]={0,1,0,-1}; dy={1,0,-1,0};

int bfs(){
    queue<P> que;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            d[i][j]=INF;
        }
    }

    que.push(P(sx,sy));
    d[sx][sy]=0;

    while(que.size()){
        P p=que.front(); que.pop();
        if(p.first==gx && p.secound==gy)break;

        for(int i=0; i<4; i++){
            int nx=p.first+dx[i], ny=p.second+dy[i];

            if(0<=nx && nx<N && 0<=ny && ny<M && maze[nx][ny]!='#' && d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return d[gx][gy];
}

void solve(){
    int ans = bfs();
    printf("%d\n",res);
}