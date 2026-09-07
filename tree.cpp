#include <iostream>
using namespace std;
const int N =1e5;
int q[N];
//返回x的祖宗节点
int find(int x){
  if(q[x] != x)q[x] = find(q[x]);
  return q[x];
}
//判断是否在同一个集合
bool is(int a,int b){
   return find(a) == find(b);
}
void merge(int a,int b){
    if(is(a,b))return;
    q[find(a)] = find(b);
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
     int n,m;
     cin >> n >>m;
     for(int i= 1;i<=n;++i){
       q[i] = i;
    }
    while(m--){
       char p;
       cin >> p;
       int a,b;
       if(p == 'M'){
          cin >> a>>b;
        merge(a,b);
       }else {
        cin >> a>>b;
        if(is(a,b)){cout << "Yes\n";
        }else{
          cout << "No\n";
         }
    }
    }
    return 0;

}