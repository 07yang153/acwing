#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1010;
int n,m;
int v[N],w[N];
//当前状态
int q[N];

int main(){
    //物品数,跟背包容量
    cin >> n >>m;
    for(int i = 1;i <= n;++i)cin >> v[i] >> w[i];
    for(int i = 1;i <= n;++i){
        for(int j = m;j>=v[i];--j){
           q[j] = max(q[j],q[j-v[i]] + w[i]);
        }
    }
    cout << q[m];
    return 0;
}
/*
cin >> n >> m;
    for(int i =1;i <= n;++i)cin >> v[i] >> w[i];
     //q[0][0-m] = 0
     for(int i =1;i <= n;++i){
        for(int j = 0;j <= m;++j){
            //不选第i个
            q[i][j] = q[i - 1][j];
           if(j >= v[i])q[i][j] = max(q[i][j],q[i - 1][j - v[i]] + w[i]);
        }
     }
     cout << q[n][m];
*/