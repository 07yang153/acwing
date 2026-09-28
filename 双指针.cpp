/*
最长连续不重复子序列
给定一个长度为 n的整数序列，请找出最长的不包含重复的数的连续区间，输出它的长度

*/
#include <iostream>
using namespace std;
const int N = 1e5;
int n;
int q[N],s[N];
//s数组存这个数存在的次数,eg:5这个数存在一次,s[5]= 1;让s[]++
int main(){
   cin >> n;
   int res=0;
   for(int i = 0;i<n;++i)cin >> q[i];
   for(int i ,j = 0;i<n;++i){
        s[q[i]]++;
        while(s[q[i]] > 1){
            //让左指针右移,直到重复的那个在s数组只有一个
            s[q[j]]--;
            j++;
        }
        res = max(res,i-j+1);
   }
   cout << res <<endl;

    return 0;+-
}