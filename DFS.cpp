#include <iostream>
using namespace std;
const int N = 10;
int n; // 代表1-n个数,有几个数就有几层
int path[N];
int str[N];
void dfs(int u)
{
    if (u == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << path[i] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!str[i])
        {
            path[u] = i;
            str[i] = true;
            dfs(u + 1);
            str[i] = false;
        }
    }
}
int main()
{
    cin >> n;
    dfs(0);

    return 0;
}