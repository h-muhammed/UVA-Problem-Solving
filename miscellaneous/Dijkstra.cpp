#include <bits/stdc++.h>
using namespace std;

#define SZ 100
const int inf = 1000000;

vector<int> edge[SZ], cost[SZ];
int d[SZ], vis[SZ], n;
int par[SZ];
struct data
{
    int city, dist;
    bool operator <(const data &p) const
    {
        return dist > p.dist;
    }
};

int dijkstra(int source, int destination)
{
    int i, ucost;
    for(i = 1; i <= n; ++i)
        d[i] = inf;

    priority_queue <data> q;

    data u, v, w;
    u.city = source;
    par[u.city] = u.city;
    u.dist = 0;

    q.push( u );

    d[source] = 0;
    while(!q.empty())
    {
        u = q.top();
        q.pop();
        ucost = d[u.city];
        for(i = 1; i <=edge[u.city].size(); i++)
        {
            v.city = edge[u.city][i];
            v.dist = cost[u.city][i] + ucost;
                if( d[v.city] < v.dist)
                {
                    d[v.city] = v.dist;
                    par[v.city] = u.city;
                    q.push( v );
                }

        }


    }
    return (d[destination]);
}

int main()
{
    int i, j, k, m, l,p,t,x;
    scanf("%d", &t);
    for(x = 1; x<=t; x++)
    {
        scanf("%d %d", &n, &m);
        {
            if(n==0&&m==0)
                break;
            for(i=1; i<=m; ++i)
            {
                scanf("%d %d %d", &j, &k, &l);

                edge[j].push_back(k);
                edge[k].push_back(j);

                cost[j].push_back(l);
                cost[k].push_back(l);
            }
            p=dijkstra(1, n);
//            if(d[n] ==1000000)
//                printf("Case %d: Impossible\n", x);
           // else
                printf("Case %d: %d\n", x, p);

        }
    }
    return 0;
}

/*
8 13
0 1 4
0 5 6
0 4 2
1 2 2
1 4 1
4 5 3
2 3 1
2 7 4
2 5 4
3 7 3
3 5 2
5 6 6
6 7 5
0 7
*/
