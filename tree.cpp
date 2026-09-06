#include <iostream>
#include <string>
using namespace std;
const int N = 1e6;
int son[N][26],cnt[N],idx;
void insert(string s){
    int p = 0;
    for(char ch : s){
      int u = ch - 'a' ;
      if(!son[p][u])son[p][u] = ++idx;
         p = son[p][u];
         }
       cnt[p] ++ ;

}
int query(string s){
    int p = 0;
    for(char ch :s){
      int u= ch -'a';
       if(!son[p][u])return 0;
       p = son[p][u];
    }
    return cnt[p];
}
int main(){
   int n;
   cin >> n;
   while(n--){
       char a;
       cin >> a;
       if(a == 'I'){
        string s;
        cin >> s;
        insert(s);
       }else{
        string s;
        cin >>s;
       cout <<  query(s) << endl;
       }
   }

  return 0;
}