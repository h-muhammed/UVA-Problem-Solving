#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int n,m,l,x,y,f;
vector<int> a[11111];
bool state[11111];

void dfs(int f)
{
    state[f]=true;
    for(int i=0; i<(int)a[f].size(); i++)
        if(state[a[f][i]]!=true)
            dfs(a[f][i]);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int res=0;
        memset(a, -1, sizeof(a));
        memset(state, false, sizeof(state));
        scanf("%d %d %d", &n, &m, &l);
        for(int i=0; i<m; i++)
        {
            scanf("%d %d", &x, &y);
            a[x].push_back(y);
        }
        for(int i=0; i<l; i++)
        {
            scanf("%d",&f);
            dfs(f);
        }
        for(int i=1; i<=n; i++)
            if(state[i]==true)res++;
        printf("%d\n",res);
    }
    return 0;
}
