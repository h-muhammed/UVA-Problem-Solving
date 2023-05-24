#include <stdio.h>
#include <iostream>
#include <sstream>
#include <math.h>
#include <limits.h>
#include <limits>
#include <string.h>
#include <string>
#include <algorithm>
#include <stack>
#include <set>
#include <ctime>
#include <queue>
#include <vector>
#include <map>
#include <assert.h>
#include <utility>
#include <math.h>

using namespace std;

long long combination(long long p , long long q);

int main()
{
    long long n, m, i = 0, j, k;
    while(scanf("%lld %lld", &n, &m)==2)
    {
        ++i;
        long long ar[n], ap[m];
        for(j = 0; j < n; ++j)
            scanf("%lld", &ar[j]);
        for(j = 0; j<m; ++j)
            scanf("%lld", &ap[j]);
        if(m==0&&n==0)
            break;
        printf("Case %lld:\n", i);
        for(j = 0; j<m; ++j)
        {

            k = combination(n, ap[j]);

        printf("%lld\n", k);
        }
    }
    return 0;
}

long long combination(long long p, long long q)
{
    long long i, d=1;
    if(p-q<q)
        q=p-q;
    for(i=1; i<=q; p--, ++i)
    {
        d*=p;
        d/=i;
    }
    return d;
}

