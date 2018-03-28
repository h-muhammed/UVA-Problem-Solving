#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)

#define MOD 1000000007
#define MX 100010

int x[] = {1,-1,0,0};
int y[] = {0,0,1,-1};


bool vis[60][60];
char ad[60][60];
int h, w,c;

vector <int> vec;

int dfs1(int i, int j)
{
    printf("+++++++++%d %d\n", i, j);
    int u, v, p;
    if(i < h && j < w && i >- 1&& j >- 1)
    {
        for(p = 0; p < 4; ++p)
        {
            u = i + x[p];
            v = j + y[p];

            if(ad[u][v] == 88 && u < h && v < w && u >-1 && v >- 1)
            {
                ad[u][v] = '*';
                dfs1(u, v);
            }
        }
    }
}

int dfs0(int i, int j)
{
    int p, u, v;
    if(ad[i][j] == 88)
    {
        ++c;
        dfs1(i, j);
    }
    if(i < h && j < w && i >-1 &&j >- 1)
    {
        for(p = 0; p < 4; ++p)
        {
            u = i + x[p];
            v = j + y[p];

            if(vis[u][v] != 1 && ad[u][v] != '.'&& u < h && v < w&& u >-1 &&v >- 1)
            {
                if(ad[u][v] == 88)
                {
                    ++c;
                    dfs1(u, v);
                }
                if(ad[u][v]=='*')
                    ad[u][v] = '.';
                vis[u][v]=1;
                dfs0(u, v);
            }
        }
    }
    return c;
}
int main()
{
    int i, j, k, t, m, l, g, f;
    while(scanf("%d %d", &w, &h) == 2)
    {
        l = 1;
        if(w == 0 && h == 0)
            break;
        memset(vis, 0 , sizeof(vis));
        getchar();
        for(j = 0; j < h; ++j)
        {
            scanf("%s", &ad[j]);
            getchar();
        }
        printf("Throw %d\n", l++);
        for(g = 0; g < h; ++g)
        {
            for(f = 0; f < w; ++f)
            {
                if(ad[g][f] == '*' || ad[g][f] == 88)
                {
                    vis[g][f] = 1;
                    int d = dfs0(g, f);
                    vec.push_back(d);
                    c=0;
                    printf("----%d %d\n", g, f);
                }
            }
        }
        sort(vec.begin(), vec.end());
        int m = vec.size();
        for(t = 0; t < m; ++t)
        {
            if(t == m-1)
                printf("%d", vec[t]);
            else
                printf("%d ", vec[t]);
        }
        printf("\n");
        vec.clear();
    }
    return 0;
}

