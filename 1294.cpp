#include <cstdio>

int main()
{
    int i;
    long long t, n, m;
    scanf("%lld", &t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lld %lld", &n, &m);
        printf("Case %d: %lld\n",i, (n*m)/2);
    }
    return 0;
}
