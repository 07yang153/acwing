#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 510;
int n, m;
// 邻接矩阵
int g[N][N];
// 到某点的距离
int dijk[N];
// 是否是已经确实的最短路
bool str[N];
int dijkstra()
{
    memset(dijk, 0x3f3f3f3f, sizeof dijk);
    dijk[1] = 0;
    for (int i = 0; i < n; ++i)
    {
        int t = -1;
        for (int j = 1; j <= n; ++j)
        {
            if (!str[j] && (t == -1 || dijk[t] > dijk[j]))
                t = j;
        }
        str[t] = true;
        for (int j = 1; j <= n; ++j)
        {
            dijk[j] = min(dijk[j], dijk[t] + g[t][j]);
        }
    }
    if(dijk[n] == 0x3f3f3f3f)return -1;
    return dijk[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    memset(g, 0x3f, sizeof g);
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = min(g[a][b], c);
    }
    int t = dijkstra();
    cout << t << endl;
    return 0;
}