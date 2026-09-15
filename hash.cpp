#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int N = 100003;
int h[N],e[N],en[N],idx;
/*
哈希冲突解决:
拉链法


*/
void insert(int x){
    //映射,a是哈希值 
    int a = (x % N + N) %N;
    e[idx] = x;
    en[idx] = h[a];
    h[a] = idx ++;
}
bool find(int x){  
   int a = (x % N + N) %N;
   for(int i = h[a];i != -1;i = en[i]){
       if(e[i] == x)return true;
   }
   return false;
}
int main(){
    int n;  
    cin >> n;
    memset(h,-1,sizeof h);
    while(n--){
     string a;
     cin  >> a;
     if(a == "I"){
        int x;
        cin >> x;
       insert(x);
     }else {
        int x;
        cin >> x;
        if(find(x))cout << "Yes" << endl;
        else cout << "No" << endl;
     }
  }
 


    return 0;
}
