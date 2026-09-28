#include <iostream>
using namespace std;
const int N = 1e5;
char ch[N], en[N];
int n,m;
//ch,en的长度
//教材的while i - j + 2;
int main(){
    ch[0] = '1'; 
    en[0] ='1';
    //en为模式串,ch为主串
   //教材的while
   int i= 1;
   int j=1;
   while(i <= n && j <= m){
      if(ch[i] == en[j]){
             i++;
             j++;
      }else{
        i = i- j+ 2;
        j = 1;
      }
   }
 //acwing,i 在j循环中往后移j- 1
 bool p = true;
 for(int i = 1;i <n;++i){
    for(int j = 1;j <m;++j){
       if(ch[i + j - 1] != en[j] ){
           p = false;
           break;
       }

    }
 }
    return 0;
}