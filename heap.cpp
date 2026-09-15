#include <iostream>
using namespace std;
const int N =1e5 +10;
int n,m;
int heap[N],size1;
void down(int x){
    int u =x;
    if(u*2 < size1 && heap[u] > heap[u * 2])u = u *2;
    if(u * 2 +1 < size1 && heap[u] > heap[u * 2+ 1])u = u* 2 +1;
    if(u != x){
        swap(heap[u],heap[x]);
        down(u);
    }
}
int  main(){
   cin >> n >>m;
   size1 = n;
   for(int i = 1;i <= n;++i){
          cin >> heap[i];
   }
   for(int i = n/2;i;--i)down(i);
   while(m--){
     heap[1] = heap[size];
     size1--;
     down(1);
   }





    return 0;

}