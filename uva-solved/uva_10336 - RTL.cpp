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
bool vis[1000][1000];
char ad[1000][1000];
int h,w, b,c,ap[1000], g,f;
void dfs(int i,int j)
{
    int p, u, v;
    if(i<h&&j<w&&i>-1&&j>-1)
    {
        if(vis[i][j]==0)
        {

            for(p = 0; p < 4; ++p)
            {
                u = i + x[p];
                v = j + y[p];
                if(ad[u][v]==ad[g][f])
                {
                    vis[i][j]=1;
                    dfs(u, v);
                }
            }
        }
    }
    return;
}
int main()
{
    int i, j, k,t, m,l=1;
    scanf("%d", &t);
    for(k=1; k<=t; ++k)
    {
        int cnt=0;
        memset(vis, 0, sizeof(vis));
        memset(ap, 0, sizeof(ap));
        l=1;
        scanf("%d %d", &h, &w);
        getchar();
        for(j=0; j<h; ++j)
        {
            scanf("%s", &ad[j]);
            getchar();
        }
        for(g=0; g<h; ++g)
        {
            for(f=0; f<w; ++f)
            {

                if(vis[g][f]!=1)
                {
                    ++ap[ad[g][f]];
                    dfs(g, f);
                }
            }
        }
        printf("World #%d\n",k);
        for(i = 97; i<=122; ++i)
        {
            for(j=97; j<123; ++j)
            {
                if(i==97)
                {
                if(ap[j]!=0)
                ++cnt;
                }
                if(ap[j]>l)
                {
                    l=ap[j];
                    m=j;
                }
                else if(ap[j]==l)
                {
                    m= min(m,j);
                }

            }
            ap[m]=-1;
            if(cnt>0)
            {
                if(cnt==0)
                break;
            printf("%c: %d\n", m, l);
            --cnt;
            }
            l=0;
        }
    }
    return 0;
}
