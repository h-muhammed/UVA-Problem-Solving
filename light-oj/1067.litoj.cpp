#include <stdio.h>

long long combination(long long n , long long m);

int main()
{
    long long n, m,i=0;
    while(scanf("%lld %lld", &n, &m)==2)
    {
        ++i;
        if(m==0&&n==0)
            break;
        printf("Case %lld: %lld\n",i,combination(n, m));
    }
    return 0;
}

long long combination(long long n, long long m)
{
    long long i, d=1;
    if(n-m<m)
        m=n-m;
    for(i=1; i<=m; n--, ++i)
    {
        d=((d%1000003)*(n%1000003))%1000003;
        d/=i;

    }
    return d;
}
