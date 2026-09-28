#include <iostream>
using namespace std;
const int N = 20;
int path[N];
bool str[N];
int n;
//u代表在第几层数或第几位,最初在第0位
void dfs(int u){
    //在最后一层,已经每位上都有数了,改遍历他了
    if(u == n){
        for(int i= 0;i<n;++i){
              cout << path[i] <<" ";
        }
        cout << endl;
    }
    //还没完全排完,没到最后一层
    for(int i =1;i <= n;++i){
           if(!str[i]){
                path[u] = i;
                str[i] = true;
                dfs(u + 1);
                str[i] = false;
           }
    }




}
int main(){
    cin >> n;
    dfs(0);


    return 0;
}