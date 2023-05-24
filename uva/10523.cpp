#include <cstdio>
#include <math.h>
int main()
{
     unsigned long long i, a, n, sum=0;
    while(scanf("%llu %llu", &n, &a)==2)
    {
        for(i = 1; i<=n; ++i)
        {
            sum += (i*pow(a, i));
        }
        printf("%llu\n", sum);
        sum = 0;
    }
    return 0;
}
