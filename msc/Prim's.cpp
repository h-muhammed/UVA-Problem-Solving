edit distance dici, upore dekh.......
ar prim's>>>

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "algorithm"
#include "vector"
using namespace std;
#define SZ 1000
const int inf = 1e9;
int n, m,  u, v;
int dis[SZ], mat[SZ][SZ];
bool vis[SZ];
int Prim()
{
    for (int i = 2; i <= n; i++)
        dis[i] = inf;

    dis[1] = 0;
    memset(vis, false, sizeof(vis));

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int k = -1;
        for (int j = 1; j <= n; j++)
        {
            if (!vis[j] && (k == -1 || dis[j] < dis[k]))
            {
                printf("k=>%d dis[%d]=> %d dis[%d]=> %d\n", k, j, dis[j], k, dis[k]);
                k = j;
            }
        }
        vis[k] = true;
        sum += dis[k];
        for (int j = 1; j <= n; j++)
        {
            if (!vis[j] && mat[k][j] < dis[j])
                dis[j] = mat[k][j];
        }
    }
    return sum;
}

int main()
{
    int i, j, k, l,m;

    while (scanf("%d %d", &n,&m) == 2)
    {
        for(i=0; i<=n; i++)
            for(j=0; j<=n; j++)
                mat[i][j] = inf;

        for(i=0; i<m; i++)
        {
            scanf("%d %d %d",&j,&k,&l);
            mat[j][k] = mat[k][j] = l;
        }

        printf("Cost for Minimum Spanning Tree is : %d\n", Prim());
    }
    return 0;
}
/*
8 11
1 2 4
1 4 10
1 5 2
2 4 8
2 3 18
3 4 11
4 5 5
4 7 11
4 8 9
6 7 1
6 8 2
*/
