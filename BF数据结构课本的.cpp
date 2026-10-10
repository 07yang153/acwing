#include <iostream>
#include <string>
using namespace std;
string a,b;
int pos;
int main(){
    cin >> a >> b >> pos;
    //任意位置找,字符串下标都从1开始
     int i = pos;
     int j = 1;
     while(i <= a.size() && j <= b.size() ){
          if(a[i] == b[j]){
              i++;
              j++;
          }else {
            i = i -(j -1) + 1; //i - j + 2
            j = 1;      
        }
    }
    return 0;
}
