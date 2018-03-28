#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector <int> arr[110];
int ln[100], ans[100];
queue <int> q;

int main()
{
    int i, j, k, a, b, n, m,u, p = 0;
    while(scanf("%d %d", &n, &m)==2)
    {
        if(n == 0 && m == 0)
            break;
        for(i = 0; i< m; ++i)
        {
            scanf("%d %d", &a, &b);
            arr[a].push_back(b);
            ++ln[b];
        }
        for(i= 1; i <= n; ++i)

            if(ln[i] == 0)
                q.push(i);

        while(!q.empty())
        {
            int u, v, i;
            u = q.front();
            ans[p++] = u;
            q.pop();
            for(i = 0; i < arr[u].size(); ++i)
            {
                v = arr[u][i];
                --ln[v];
                if(ln[v] == 0)
                    q.push(v);
            }
        }
        printf("%d\n", ans[0]);
        for(i = 1; i < n; ++i)
        {
            printf("%d\n", ans[i]);
             arr[i].clear();
             ln[i] = 0;
        }
        arr[i].clear();
        ln[i] = 0;
      p=0;

    }
    return 0;
}

/*
3 2
1 2
2 3
*/
