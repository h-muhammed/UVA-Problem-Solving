#include <stdio.h>
long long combination(long long n , long long m);

int main()
{
    long long n, m;
    while(scanf("%lld %lld", &n, &m)==2)
    {
        if(m==0&&n==0)
            break;
        printf("%lld\n",combination(n, m));
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
        d*=n;
        d/=i;
    }
    return d;
}
