#include <iostream>
using namespace std;
const int N = 20;
int n;
char g[N][N];
int col[N],dg[N],udg[N];
void dfs(int u){
    if(u == n){
       for(int i = 0;i<n;++i){
          cout << g[i] << " ";
       }
       cout << endl;
    }
    for(int i = 1;i <= n;++i){
      if(!col[i] && !dg[u - i + n] && !udg[u + i]){
        g[u][i] = 'Q';
        col[i] = true;
        dg[u - i +n] = true;
        udg[u + i] = true;
        dfs(u + 1);
        g[u][i] = '.';
        col[i] = false;
        dg[u - i +n] = false;
        udg[u + i] = false;
    
    
    }



    }





}
int main(){
     cin >> n;
     dfs(0);



    return 0;
}