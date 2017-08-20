#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<stack>

using namespace std;

typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;

int main() {
    queue<int> ique; 
    
    ique.push(70); 
    ique.push(46);
    
    ique.front();
    cout << ique.front() << endl;//70
    
    ique.pop(); 
    
    ique.size();
    ique.empty();//false
    
    return 0;
}