#include<stdio.h>
#include<string.h>
#define sz 15000
char a[sz][sz];
int main()
{
    int i,j,c,h=0,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<2; i++)
            for(j=0; j<sz-1; j++)
                a[i][j]='0';
            a[0][sz-1]='0';
            a[1][sz-1]='1';
        for(i=2; i<=n; i++)
            for(j=sz-1; j>=0; j--)
            {
                c=a[i-1][j]-'0'+a[i-2][j]-'0';
                a[i][j]=c%10+h+'0';
                if(c>9)
                    h=1;
                else
                    h=0;
            }
        for(j=0; j<sz; j++)
        {
            if(a[n][j]!='0')
                break;
        }
        for(i=j;i<sz;i++)
            printf("%c",a[n][i]);
            printf("\n");
    }
    return 0;
}
