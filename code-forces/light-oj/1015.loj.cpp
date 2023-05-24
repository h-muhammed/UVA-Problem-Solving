#include <cstdio>

int main()
{
    int ar[1001], t, i, j, sum, n;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)
    {
        sum=0;
        scanf("%d", &n);
        for(j = 0; j< n; ++j)
        {
            scanf("%d", &ar[j]);
            sum += ar[j];
        }
        printf("Case %d: %d\n", i , sum);
    }
    return 0;
}
