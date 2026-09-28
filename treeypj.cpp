#include <iostream>
#include <vector>
const int N =1e6 +10;
int path[N],str[N];
int n;
using namespace std;
void dfs(int u){
      if(u == n){
         for(int i = 0;i <n;++i){
            cout  << path[i] <<" ";
         }
      }
       for(int i = 1,){

       }


}
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     int n = nums.size();
     for(int i = 0; i < n;i++){
           path[i] = nums[i];
     }
     dfs(0);    
    }
};