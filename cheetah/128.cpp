using namespace std;

bool grid[100][100]={false};
int vx[]={1,-1,0,0};
int vy[]={0,0,1,-1};
double prob[4];

int main(){
    dfs(50,50,n);
    return 0;
}

double dfs(int x, int y, int n){
    if(grid[x][y])return 0;
    if(n==0)return 1;

    grid[x][y]= true;
    double ret = 0;
    for(int i=0; i<4; i++){
        ret += dfs(x+vx[i],y+vy[i],n-1)*prob[i];
    }
    grid[x][y]= false;
    return ret;
}