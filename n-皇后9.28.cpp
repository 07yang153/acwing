#include <iostream>
using namespace std;
const int N =20;
char a[N][N];
bool row[N],dg[N],edg[N];
int n;
void dfs(int u){
     if(u == n){
       for(int i =  0;i  < n;++i){
          cout << a[i] <<endl;
       }
        cout << endl;
     }
    for(int i= 0;i<n;++i){
         if(!row[i] && !dg[u + i] && !edg[u-i+n]){
            a[u][i] ='Q';
            row[i] = dg[u + i] = edg[u-i+n] = true;
            dfs(u + 1);
            a[u][i] = '.';
        row[i] = dg[u + i] = edg[u-i+n] = false;
         }
    }


}
int main(){
     cin  >> n;
  for(int i = 0; i < n; ++ i)
        for(int j = 0; j < n; ++ j)
            a[i][j] = '.';
     dfs(0);

    return 0; 
}
