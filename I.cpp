
#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<sstream>
#include<set>
#include<map>
#include<limits.h>
#include<string>
#include<cstdlib>
using namespace std;
int mat[1007][1007];
int main()
{
    int n,m,i,j,tst,cas=0,ans;
    char str1[1007],str2[1007];
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d ", &n, &m);
        gets(str1);
        gets(str2);
        for(i=0;i<=n;i++)
        mat[0][i]=0;
        for(i=0;i<=m;i++)
        mat[i][0]=0;
        for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else
            mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
        if(n>m)
        {
            ans=m-mat[n][m];
            ans+=n;
        }
        else
        {
            ans=n-mat[n][m];
            ans+=m;
        }
        printf("Case %d: %d\n",++cas,ans);
    }

    return 0;
}
