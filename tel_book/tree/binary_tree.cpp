#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<stack>
#include<map>
#define MAX 10000
#define NIL -1

using namespace std;

typedef long long ll;
typedef double db;

struct Node{int parent, left, right;};

Node T[MAX];
int n,D[MAX],H[MAX];

void setDepth(int u, int d){
    if(u==NIL)return;
    D[u]=d;
    setDepth(T[u].left, d+1);
    setDepth(T[u].right, d+1);
}

int setHeight(int u){
    int h1=0, h2=0;
    if(T[u].left != NIL){
        h1=setHeight(T[u].left)+1;//子が存在するとき再帰的に+1
    }
    if(T[u].right != NIL){
        h2=setHeight(T[u].right)+1;
    }
    return H[u]=(h1>h2?h1:h2);//高い方
}

int getSibling(int u){
    if(T[u].parent==NIL)return NIL;
    if(T[T[u].parent].left != NIL && t[t[u].parent].left != u)
        return T[T[u].parent].left;
    if(T[T[u].parent].right != NIL && t[t[u].parent].right != u)
        return T[T[u].parent].right;
    return NIL;
}

void print(int u){
    cout<<"depth"<<D[u]<<endl;
    cout<<"height"<<H[u]<<endl;

    if(T[u].parent==NIL){
        cout<<"root"<<endl;
    } else if(T[u].left==NIL && T[u].right==NIL){
        cout<<"leaf"<<endl;
    } else {
        cout<<"internal leaf"<<endl;
    }
}

int main(){
    int v,l,r,root;
    scanf("%d",&n);

    for(int i=0; i<n; i++)T[i].parent=NIL;//親初期化

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &v, &l, &r);
        T[v].left=l;
        T[v].right=r;
        if(l != NIL)T[l].parent=v;
        if(r != NIL)T[r].parent=v;
        if(T[i].parent==NIL)root=i;
    }

    setDepth(root,0);
    setHeight(root);

    for (int i = 0; i < n; ++i) {
        print(i);
    }
    return 0;
}