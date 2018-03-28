#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

vector <int> edge[310], v, re;
int visit[310], num[310];
char arr[310];

void dfs(int s)
{
    re.push_back(s);
    visit[s] = 1;

    int i, x = edge[s].size();

    for(i = 0; i < x; ++i)
    {
        if(!visit[edge[s][i]])
        {
            dfs(edge[s][i]);
        }
    }
}

int main()
{
    int n, i, j, x;

    scanf("%d", &n);

    for(i = 1; i <= n; ++i)
        scanf("%d", &num[i]);

    for(i = 1; i <= n; ++i)
    {
        scanf("%s", arr);
        for(j = 0; j < n; ++j)
        {
            if(arr[j] == '1')
                edge[i].push_back(j+1);
        }
    }

    for(i = 1; i <= n; ++i)
    {
        if(visit[i] == 0)
        {
            printf("%d\n", i);
            dfs(i);
            x = re.size();

            for(j = 0; j < x; ++j)
            {
               // printf("%d\n", num[re[j]]);
                v.push_back(num[re[j]]);
            }
            //printf("\n\n");
            sort(re.begin(), re.end());
            sort(v.begin(), v.end());

            for(j = 0; j < x; ++j)
            {
                num[re[j]] = v[j];
            }

            re.clear();
            v.clear();
        }
    }

    printf("%d", num[1]);

    for(i = 2; i <= n; ++i)
        printf(" %d", num[i]);
    printf("\n");

    return 0;
}
