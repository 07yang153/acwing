#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;
const int N = 510;
int q[N][N];
int res[N][N];
int n;
int maxroad(int x,int y){
      if(x == n-1)return q[x][y];
      if(res[x][y] != -1)return res[x][y];
      res[x][y] = q[x][y] + max(maxroad(x + 1,y),maxroad(x + 1,y+ 1));
      return res[x][y];
    }
int main(){
    memset(res,-1,sizeof res);
    cin >> n;
    for(int i = 0;i < n;++i){
        for(int j = 0;j <= i;++j){
            cin >> q[i][j];
        }
    }
    cout << maxroad(0,0);
    return 0;
}