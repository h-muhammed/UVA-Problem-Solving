#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
long long a[100005], b[100005];

int main()
{
    long long t,i,n, j, k;
    scanf("%lld", &t);
    for(i=1; i<=t; ++i)
    {
        long long l=0;
        scanf("%lld %lld", &n, &k);
        for(j=0; j<n;++j)
        scanf("ll%d", &a[j]);
        for(j=0;j<n; ++j)
        scanf("%lld", &b[j]);
        for(j=0; j<n; ++j)
        {
            long long div = k/a[j];
            div *=b[j];
            if(l<=div)
            l = div;

        }
        printf("%lld\n", l);
    }
    return 0;
}
