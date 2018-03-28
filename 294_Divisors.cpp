#include <bits/stdc++.h>
using namespace std;
#include <string.h>
#include <math.h>
long long arr[100000];
int main()
{
    long long t, n, m, a, b, i, j, k, l=0;
    scanf("%lld", &t);
    for(k = 1; k <= t; ++k)
    {
        scanf("%lld %lld", &m, &n);
        for(i = m; i <= n; ++i)
        {
            a = i;
            for(j = 2; j <= a/2+1; j++)
            {
               // printf("a,j==>%lld %lld\n", a, j);
                if(a % j == 0)
                {
                    if(a!=j)
                    ++arr[i];
                }
            }
        }
        for(j = m; j <= n; ++j)
            printf("%lld\n", arr[j]);
    }
    return 0;
}
