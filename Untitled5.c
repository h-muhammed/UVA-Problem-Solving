#include <stdio.h>

int main()
{
    long long sum, d;
    int t, n, i, j;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)
    {
         sum = 0;
        scanf("%d", &n);
        for(j = 1; j<= n ; ++j)
        {
            d = ((j*j)*(j+1)*(j+1))/4;
            sum += d;
        }
        printf("Case %d: %lld\n", i, sum);
    }
    return 0;
}
