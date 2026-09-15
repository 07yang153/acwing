#include <iostream>
using namespace std;
const int N =1e5,M = 1e6 +10;
char s[M],p[N];
int n,m,ne[N];
int mian(){
  cin >> n;
    //ne数组
    for(int i = 2,j = 0;i <=n){
   while(j && s[i] != p[j + 1])j = ne[j];
   if(p[i] = p[j + 1])j ++;
   ne[i] = j;
    }
    
    //kmp查找


    for(int i = 1,j = 0;i<=m;++i){
      while(j && s[i] != p[j + 1])j = ne[j];
      if(s[i] = p[j +1])j++;
      if(j = n){
    //匹配成功
      }
    }   




    return 0;
}