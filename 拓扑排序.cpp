#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100010;
int h[N], e[N], ne[N], idx;
int q[N], d[N];
int n, m;
bool tupo()
{
    memset(q, -1, sizeof q);
    int tt = -1;
    int hh = 0;
    for (int i = 1; i <= n; ++i)
    {
        //! d[i] 等价于d[i] ==0
        if (!d[i])
        {
            q[hh++] = i;
        }
        while (hh <= tt)
        {
            int t = q[hh++];
            for (int j = e[t]; j; j = ne[j])
            {
                if (!d[j])
                {
                    d[j]--;
                    if (d[j] == 0)
                        q[++hh] = j;
                }
            }
        }
    }
    return hh == n-1;
}

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
    d[b]++;
}
int main()
{
    memset(h, -1, sizeof h);
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    if (tupo)
    {
        for (int i = hh; i != -1; i++)
        {
            cout << q[i] << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
