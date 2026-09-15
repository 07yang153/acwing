#include <iostream>
using namespace std;
const int N =200003,a = 0x3f3f3f3f;
int q[N];
//寻址法
//查找是否在哈希数组内,有的话,返回下标
int find(int x){
   int n = (x % N +N) %N;
   while(q[n] != a && q[n] != x){
       n++;
       if(n = N)n = 0;
   }
   return 0;

}

struct stu{
    int age;
    int score;
    //默认构造函数
    stu(){
     age = 122;
     score  = 4;
        
    }
     void init_stu(){
        age = 66;
        score = 66;
     }



};

int main(){
    stu s1;
    stu s2;
    struct stu s3; 


    return 0;
}
