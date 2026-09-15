#include <iostream>
using namespace std;
//邻接表,图的创建
const int N = 1e5;
int h[N],e[N],en[N],idx;
bool str[N];
void add(int a,int b){
     //a指向b
       e[idx] = b;
       en[idx] = h[a];
       h[a] = idx ++;
} 
//图的遍历
void dfs(int u){
     str[u] = true;
     for(int i = h[u];i!= -1;i = en[u]){
        int j = e[i];
          if(!str[j])dfs(j);
     }
}

int main(){
      dfs(1);
    return 0; 
}