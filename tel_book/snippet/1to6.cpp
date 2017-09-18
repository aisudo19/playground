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

int maximaunProfit(){
    int profit = -200000000;
    int minValue = R[0];

    for(int i=0; i<n; i++){
        profit=max(profit,R[i]-minValue);
        minValue=min(minValue,R[i]);
    }
    cout<<profit<<endl;
}

void insertionSort(int A[], int n){
    int i,j,v;
    for(int i=1; i<n; i++){
        v=A[i];
        j=i-1;
        while(j>=0&&A[j]>v){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
    }
}

int bubbleSort(int a[], int n){
    int sw=0;
    bool flag=1;
    for(int i=0; flag; i++){
        flag=0;
        for(int j=n-1; j>= i+1; j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                flag=1;
                sw++;
            }
        }
    }
}

int selectionSort(int a[], int n){
    int i,j,t,sw=0, minindex;
    for(int i=0; i<n; i++){
        minindex=i;
        for(j=1; j<n; j++){
            if(a[j]<a[minindex])minindex=j;
        }
        swap(a[i],a[minindex]);
        if(i!=minindex)sw++;
    }
    return sw;
}

int linerSerch(int a[], int n, int key){
    int i=0;
    A[n]=key;
    while(A[i]!=key)i++;
    return i != n;
}

int binarySerch(int a[],int key){
    int left=0;
    int right=n;
    int mid;

    while(left<right){
        mind=(left+right)/2;
        if(key==a[mid])return 1;//found!
        if(key>a[mid])left=mid+1;
        else if(key<a[mid]) right=mid;//rightのもちかた
    }
    return 0;
}
