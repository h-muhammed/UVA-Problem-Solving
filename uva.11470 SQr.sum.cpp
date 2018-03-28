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

int x1[] = {1}, w,z,k,l,sum;
int x2[] = {-1};
int ar[15][15];
int vis[15][15];

int dfs(int i, int j, int k, int l, int w, int z)
{

printf("______%d %d %d %d\n", k,l ,i,j);
    if(i==l && j==k)
    {
        for(j=k;j<=z;)
        {
            j+=x1[0];
        sum+=ar[i][j];
        printf("1st===>%d %d %d\n", i,j,sum);

        }
        j-=1;
        dfs(i, j, k, l, w,z);

    }
    else if(j==z&&i==l)
    {
        for(i=l;i<=w;)
        {

            i+=x1[0];
        sum+=ar[i][j];
        printf("2nd===>%d %d %d\n", i,j,sum);
        }
        i-=1;
        dfs(i,j,k,l,w,z);

    }
    else if(j==z&&i==w)
    {

        for(j=z; j>0;)
        {


        j+=x2[0];
        sum+=ar[i][j];
        printf("3rd==>%d %d %d\n", i,j,sum);
        }
        //j+=1;
        dfs(i,j,k,l,w,z);
    }
    else if(i==w&&j==l)
    {
        for(i=w;i>k; )
        {

        i+=x2[0];
        if(i!=l)
        sum+=ar[i][j];
        printf("4rth===>%d %d %d\n", i,j,sum);
        }
        i+=1;
        dfs(i,j,k,l,w,z);
    }
    return sum;
}

int main()
{
    int i, j, k, n;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        memset(vis, 0, sizeof(vis));
        int m=n, d, l=1,tt=0;
        for(i=0; i<n; ++i)
            for(j=0; j<n; ++j)
                scanf("%d", &ar[i][j]);
        if(n%2==0)
            n-=1;
        for(i=0; i<=n/2; ++i)
        {
            m--;


                k=l=i;
                z=w=m;
            d=dfs(i,i, k,l, w, z);

            tt+=d;
            tt+=ar[i][i];
            printf("tt====>%d",tt);
            if(i<n/2)
                printf(" ");

            tt=0;
        }
        printf("\n");
    }
    return 0;
}
