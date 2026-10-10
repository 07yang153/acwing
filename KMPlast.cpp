#include <iostream>
#include <string>
using namespace std;
const int N = 1e6 +10;
int n,m;
char p[N] ,s[N];
int ne[N];
int main(){
    cin >> n //p + 1  
    >> m >> s + 1;
    //求ne
    for(int i = 2,j= 0;i <= m;++i){
        while(j && p[i] != p[j + 1])j = ne[j];
        if(p[i] == p[j + 1])j++;
        ne[i] = j; 
    }
    //kmp匹配
     for(int i = 1,j = 0;i<= m;++i){
        while(j && s[i] != p[j + 1])j = ne[j];
        if(s[i] == p[j + 1])j++; 
        if(j == n){
             cout << i - n << endl;
             j = ne[j];
        }     
    }



    return 0;
} 