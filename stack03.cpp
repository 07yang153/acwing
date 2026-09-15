#include <iostream>
using namespace std;
const int N = 1e5;
int q[N],tt;
//单调栈
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
     int n;
     cin >>n;
     for(int i = 0;i < n;++i){
       int x;
       cin >>x;
       while(tt && q[tt]  >= x)tt--;
       if(tt){
           cout << q[tt];
       }else{
        cout << -1;
        }
        q[++tt] = x;

     }


    return 0;
}