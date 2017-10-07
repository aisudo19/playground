#include <iostream>
using namespace std;
static const int MAX=100;
static const int INF=(1<<21);
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n, m[MAX][MAX];

int prim(){
    int u,minv;
    int d[MAX],p[MAX],color[MAX];

    //初期化
    for(int i=0; i<n; i++){
        d[i]=INF;
        p[i]=-1;
        color[i]=WHITE;
    }
    d[0]=0;

    while (1){
        minv=INF;
        u=-1;
        for(int i=0; i<n; i++){
            if(minv>d[i]&&color[i]!=BLACK){
                u=-1;
                minv=d[i];
            }
        }
        if(color[u]==BLACK)break;
        color[u]=BLACK;
        for(int v=0; v<n; v++){
            if(color[v]!=BLACK&&m[u][v]!=INF){
                if(d[v]>m[u][v]){
                    d[v]=m[u][v];
                    p[v]=u;
                    color[v]=GRAY;
                }
            }
        }
    }

    int sum=0;
    for(int i=0; i<n; i++){
        if(p[i]!=-1)sum+=M[i][p[i]];
    }
    return sum;
}


int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int edge; cin>>edge;
            m[i][j]=(edge==-1)?INF:edge;
        }
    }
    cout<<prim()<<endl;
    return 0;
}