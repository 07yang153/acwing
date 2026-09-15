#include <iostream>
using namespace std;
const int N = 100100;
int head,idx;
int e[N],ne[N];
void init(){
    head = -1;
    idx = 0;
}
//头插
void insert_head(int x){
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
//任意位置插
void insert(int k,int x){
     e[idx] = x;
     ne[idx] = ne[k];
     ne[k] = idx;
     idx++;
}
//删除
void del(int k){
      ne[k] = ne[ne[k]];
}

int main(){
     int M;
     cin >> M;
        init();
     while(M--){
        int k,x;
        char m;
        cin >> m;
        if(m == 'H'){
            cin >> x;
           insert_head(x);
        } else if(m == 'D'){
            cin >> k;
            if(!k){
                head = ne[head];
            }else {del(k - 1);
                
            }
        }else{
            cin >> k >>x;
              insert(k -1,x);
        }
    
    }
      for(int i = head;i!= -1;i = ne[i]){
         cout << e[i] << " ";
      }
      cout << endl;
    


    return 0;
}