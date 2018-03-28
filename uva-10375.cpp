#include <stdio.h>
long long combination(long long n , long long m);

int main()
{
    long long n, m, r, s,d, k;
    double res;
    while(scanf("%lld %lld %lld %lld", &n, &m, &r,&s)==4)
    {
        if(m==0&&n==0)
            break;
            d=combination(n, m);

            k=combination(r,s);
            printf("%lld %lld\n", d,k);
            res = (double)d/(double)k;
        printf("%.5lf\n",res);
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

