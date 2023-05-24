#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector <int> node[20000];

int d=0;

bool vis[20000];

int dfs(int start);

int main()
{
    int t, a, b, i, j, k,sum, n,g;
    scanf("%d", &t);
    for(i =1; i<=t; ++i)
    {
        g=0;
        sum=0;
        scanf("%d", &n);
        for(j = 1; j<=n; ++j)
        {

            scanf("%d %d", &a , &b);
            node[a].push_back(b);
            node[b].push_back(a);
            if(g<a)
            g=a;
            if(g<b)
            g=b;
        }
        for(j = 1; j<=g; ++j)
        {
            vis[j] = false;
        }
        for(j = 1; j<=g; j++)
        {
            if(vis[j]==false)
                sum += dfs(j);
                d=0;
        }
        printf("Case %d: %d\n", i, sum);
        for(j = 1; j<=g; ++j)
        {
            node[j].clear();
        }
    }
    return 0;
}

int dfs(int start)
{
    vis[start] = true;
    int i, k, l;
    k = node[start].size();

    if(d<k)

        d=k;

    for(i = 0; i<k; ++i)
    {
        l = node[start][i];
        if(vis[l]==false)
        dfs(l);
    }
    return(d);
}
