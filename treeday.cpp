#include <iostream>
using namespace std;
int rese(int n,int m){
    cin >>n >>m;
    if(n == 1)return 0;
    else 
    return(rese(n-1,m) + m) % n;
}
int main(){
    return 0; 
}
