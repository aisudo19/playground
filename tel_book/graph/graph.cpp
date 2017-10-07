#include <iostream>
using namespace std;

static const int N=100;

int main(){
    int M[N][N];
    int n,u,k,v;

    cin>>n;

    //初期化
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {M[i][j]=0;
        }
    }

    for (int i = 0; i < n; ++i) {//node分ループして隣接行列つくる
        cin>>u>>k;
        u--;//0 origin
        for(int j=0; j<k; j++){
            cin>>v;
            v--;//0 origin
            M[u][v]=1;//辺をはる
        }
    }

    //出力
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j)cout<<" ";
            cout<<M[i][j];
        }
        cout<<endl;
    }
    return 0;
}