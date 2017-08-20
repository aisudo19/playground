#include<cstdio>
#define MAX 10000
#define NIL -1

struct Node {int parent, left, right}

Node T[MAX];
int n, D[MAX], H[MAX];

void