#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int e[N];
int idx,m,r[N],l[N];
void init(){
    r[0] = 1;
    l[1] = 0;
    idx = 2;
}
//双向循环链表
void add(int k,int x){
        e[idx] = x;
        r[idx] = r[k];
        l[idx] = k;
        r[k] = idx;
        l[r[idx]] = idx; 
         idx ++; 
}
//删除第k个点
void remove(int k){
       r[l[k]] = r[k];
       l[r[k]] = l[k];
     
}
int main(){
    ios::sync_with_stdio(false);
    init();
    cin >> m;     
    while(m --){
     int x,k;
        string a;
     cin >> a;
      if(a == "L"){
       cin >> x;
        add(0,x);
      }else if(a == "R"){
       cin >> x;
        add(l[1],x);
      }else if(a == "D"){
         cin >> k;
        remove(k + 1);
      }else if(a == "IL"){
        cin >> k >>x;
        add(l[k + 1],x);
      }else{
        cin >> k >> x;
        add(k + 1,x );  
      }
 


    }
         for(int i = r[0];i!=1;i = r[i]){
            cout << e[i] << " ";
         }

    return 0; 
}