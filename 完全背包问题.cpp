#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1010;
int n,m;
int v[N],w[N];
int q[N][N];
int main(){
    cin >> n>> m;
    for(int i =1;i <= n;++i)cin >> v[i]>> w[i];
    for(int i = 1;i <= n;++i){
        for(int j = 0;j <= m;++j){
            for(int k =0;k *v[i] <= j;++k){
             q[i][j] = max(q[i][j],q[i - 1][j - k*v[i]] + k*w[i]);
            }
        }
    }
    cout << q[n][m];
    return 0;
}