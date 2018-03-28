#include<stdio.h>
int x[]= {-1,-1,-1,0,0,1,1,1};
int y[]= {-1,0,1,-1,1,-1,0,1};
void dfs(int ar[][102],int i,int j,int m,int n)
{
    int k,u,v;
    if(i>-1&&j>-1&&i<m&&j<n)
    {
        if(ar[i][j]==1)
        {
            ar[i][j]=0;
            for(k=0; k<8; k++)
            {
                u=i+x[k];
                v=j+y[k];
                dfs(ar,u,v,m,n);
            }
        }
    }
    return;
}
int ar[102][102];
int main()
{
    int n,m,i,j,k,l,dep;
    char arr[102],c;
    while(scanf("%d%d%c",&m,&n,&c)==3)
    {
        dep=0;
        if(m==0)
            break;
        memset(ar,0,sizeof(ar));
        for(i=0; i<m; i++)
        {
            gets(arr);
            for(j=0; j<n; j++)
                if(arr[j]=='@')
                    ar[i][j]=1;
        }
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(ar[i][j]==1)
                {
                    dep++;
                    dfs(ar,i,j,m,n);
                }
        printf("%d\n",dep);
    }
    return 0;
}
