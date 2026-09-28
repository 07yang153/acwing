#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector <int> a;
int main(){
   cin >> n;
   for(int i =0;i <n;++i){
      int m;
      cin >> m;
      a.push_back(m);
   }
   a.erase(unique(a.begin(),a.end()),a.end());
   sort(a.begin(),a.end());
   


    return 0;
}