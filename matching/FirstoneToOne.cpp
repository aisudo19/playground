#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<stdio.h>
#include<queue>
#include<stack>
#include<unistd.h>
#include<random>

using namespace std;

typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector< vector<ll> > vvll;

ll N;
/*
bool wPrefersM1OverM(vvll prefer, ll w, ll m, ll m1) {
    for (ll i = 0; i < N; i++) {
        if (prefer[w][i] == m1) {
            return true;
        }
        if (prefer[w][i] == m) {
            return false;
        }
    }
    return true;
}
 */

bool wPrefersM1OverM(vvll prefer, ll w, ll m, ll m1) {
    vll::iterator a=find(prefer[w].begin(),prefer[w].end(),m1);
    vll::iterator b=find(prefer[w].begin(),prefer[w].end(),m);

    return (a>b)? true: false;
}

void stableMarriage(vvll prefer) {



    ll i,j;
    random_device seed_gen;
    mt19937 engine(seed_gen());

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            prefer[i][j]=j+N;
        }
        shuffle(prefer[i].begin(),prefer[i].end(), engine);
    }
    for(i=N; i<N*2; i++){
        for(j=0; j<N; j++){
            prefer[i][j]=j;
        }
        shuffle(prefer[i].begin(),prefer[i].end(), engine);
    }
/*
    for(i=0; i<N*2; i++){
        for(j=0; j<N; j++){
            cout<<prefer[i][j];
        }
        cout<<"\n";
        if(i==N-1)cout<<"Women preference"<<endl;
    }
*/


    vector<ll> wPartner(N,-1);
    vector<bool> mFree(N, false);


    ll freeCount = N;
    ll m;
    while (freeCount > 0) {
        for (m = 0; m < N; m++) {//セグフォ
            if (mFree[m] == false) {
                break;
            }
        }

        for (ll i = 0; i < N && mFree[m] == false; i++) {
            ll w = prefer[m][i];
            if (wPartner[w - N] == -1) {
                wPartner[w - N] = m;
                mFree[m] = true;
                freeCount--;
            } else {
                ll m1 = wPartner[w - N];
                if (wPrefersM1OverM(prefer,w, m, m1) == false) {
                    wPartner[w - N] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }

            }
        }
    }

    cout << "Woman Man" << endl;
    for (ll i = 0; i < N; i++) {
        cout << " " << i + N << "\t" << wPartner[i] << endl;
    }
}

void makePrefer(vvll prefer){
    ll i,j;
    for(i=0; i<N*2; i++){
        for(j=0; j<N; j++){
            prefer[i][j]=j;
        }
        random_shuffle(prefer[i].begin(),prefer[i].end());
    }
    cout<<"Man preference"<<endl;
    for(i=0; i<N*2; i++){
        for(j=0; j<N; j++){
            cout<<prefer[i][j];
        }
        cout<<"\n";
        if(i==N-1)cout<<"Women preference"<<endl;
    }
}

int main() {
    cout<<"Number school"<<endl;

    cin>>N;
    vvll prefer(N*2, vll(N));
    //makePrefer(prefer);
    stableMarriage(prefer);
    return 0;
}