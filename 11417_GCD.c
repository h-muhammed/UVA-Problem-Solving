#include<stdio.h>
int GCD(int i, int j);
int main()
{
    int n, i, j, k, G=0;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; ++j)
            {
                G+=GCD(i, j);
            }
        }
        printf("%d\n", G);
        G=0;
    }
    return 0;
}
int GCD(int i, int j)
{
    int a, b, c;
    if(i%j==0)
        return(i);
    else
    {
        for(; i!=1; )
        {
            a=j/i;
            if(j%i==0)
                break;
            c=i;
            b=a*i;
            i=j-b;
            j=c;
        }
        return (i);
    }
}
