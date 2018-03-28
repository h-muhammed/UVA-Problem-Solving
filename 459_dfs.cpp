#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <iostream>
#include <utility>
#include <vector>
#include <map>

using namespace std;

vector <int> vec[30];
int dfs(int strt);
map<char,int>mp;
bool vis[30];

int main()
{
    int i, j, k, n, m, l=1;

    char s[3];

    for(char ch = 'A'; ch <= 'Z'; ++ch)
        mp[ch]= l++;

    scanf("%d", &n);

    getchar();
    getchar();

    for(i=1; i<=n; ++i)
    {
        memset(vis, 0, sizeof(vis));
        int cnt=0;
        gets(s);
        m=s[0]-'A' + 1;
        while(1)
        {
            gets(s);
            if(strlen(s) == 0)
            break;
            vec[mp[s[0]]].push_back(mp[s[1]]);
            vec[mp[s[1]]].push_back(mp[s[0]]);
        }

        for(j=1; j<=m; ++j)
        {
            if(vis[j]!=1)
            {
                dfs(j);
            ++cnt;
            }
        }
        printf("%d\n", cnt);
        for(j = 1; j<=m; ++j)
            vec[j].clear();
    }

    return 0;
}

int dfs(int node)
{
    int a, b, c;
    vis[node] = 1;
    for(a=0; a<vec[node].size(); ++a)
    {

        b=vec[node][a];
        if(vis[b]!=1)
        {
            dfs(b);
        }
    }
    return 0;
}
