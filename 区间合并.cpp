#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
using PII = pair<int,int>;
vector <PII> a;
void merge(vector <PII> &a){
     sort(a.begin(),a.end()); 
     int st = -2e9,ed = -2e9;
     vector<PII> res;
     for(auto x : a){
          if(ed < x.first){
             if(st != -2e9){
                 res.push_back({st,ed});
             }
                st = x.first;
                ed = x.second;
          }else{
            ed = max(ed,x.second);
          }
     }
     if(st != -2e9){
           res.push_back({st,ed});
     }
     a = res;





}
int main(){
     cin >> n;
     for(int i = 0;i <n;++i){
       int l,r;
       cin >> l >>r;
       a.push_back({l,r});
     }
     merge(a);
 
cout <<a.size() <<endl;

    return 0;
}