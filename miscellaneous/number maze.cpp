#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define SZ 1000
const int inf = 1000000;

int edge[SZ][SZ], cost[SZ];
int d[SZ];
int par[SZ];

struct data{
    city, dist;
    bool operator < ( const data &p )const
    return dist > p.dist;
};

int main()
{
    int n, m, i, j, k, l, f, t, p, q, g;
    scanf("%d", &t);
    for(f=1; f<=t; ++f)
    {
        cin>>n>>m;
        for(i = 0; i<= n; ++i)
        {
            for(j = 0; j<= m; ++k)
            cin>>edge[i][j];
        }
    }
return 0;
}
