#include <cstdio>
#include <cmath>

int main()
{
    long long m, n,i=0;
    while(scanf("%lld", &n)==1)
    {
        ++i;
        if(n==0)
        break;
        m = ceil((sqrt(8*n + 9) + 3) / 2);
        printf("Case %lld: %lld\n", i,m);
    }
    return 0;
}
