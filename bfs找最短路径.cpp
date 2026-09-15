#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100010;
int h[N],e[N],ne[N],idx;
int n,m;
//q队列,d表示从起点到一个点的距离
int q[N],d[N];
void add(int a,int b){
   e[idx] = b;
   ne[idx] = h[a];
   h[a] = idx++;
}
int bfs(int x){
    q[0] =x ;
   memset(d,-1,sizeof d);
 int hh = 0, tt = 0;
  d[x] = 0;
   while(hh <= tt){
    int p = q[hh++];
    for(int i = h[p];i != -1;i = ne[i]){
      int j = e[i];
      if(d[j] == -1){
        d[j] = d[p] + 1;
        q[++tt] = j;
      }
 }   
}
return d[n];
 
}
int main(){
    cin >> n >> m;
    memset(h,-1,sizeof h);
    for(int i = 0;i <m;i++){
         int a,b;
         cin >> a >>b;
         add(a,b);
    }
    cout << bfs(1)<<endl;
    return 0;
}
