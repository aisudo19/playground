#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<string> maze;
int startRow;
int startCol;
vector<int> moveRow;
vector<int> moveCol;


int main(){
    int max=0;
    int width=maze[0].size();
    int height=maze.size();

    int board[50][50];

    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            board[i][j]=-1;
        }
    }

    board[startRow][startCol]=0;
    queue<int> queueX;
    queue<int> queueY;
    queueX.push(startCol);
    queueY.push(startRow);

    while(queueX.size()>0){
        int x=queueX.front();
        int y=queueY.front();
        queueX.pop(); queueY.pop();

        for(int i=0; i<moveCol.size(); i++){
            int nextX=x+moveCol[i];
            int nextY=x+moveRow[i];

            if(0<=nextX && nextX<width && 0<=nextY && nextY<height
                    && board[nextX][nextY]==-1 && maze[nextX][nextY]=="."){
                board[nextX][nextY]=board[x][y]+1;
                queueX.push(nextX);
                queueY.push(nextY);
            }
        }
    }

    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if(maze[i].substr(j,1)=='.'&&board[i][j]==-1){
                return -1;
            }
            max=max(max,board[i][j]);
        }
    }
    return max;
}