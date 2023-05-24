#include <stdio.h>
#include <iostream>
long long c[100100], in1[100100], in2[100100], y;

long long find_remainder(long long x)
{
    return( x / y) % 10;
}

int main()
{
    int i, j, k, n, max;
    while(scanf("%lld", &n)==1)
    {
        max = 0;
        for(i=0; i<n; ++i)
        {
            scanf("%lld", &in1[i]);
            if(max < in1[i])
            {
                max = in1[i];
            }
        }
        j = 0;
        while(max > 0)
        {
            max = max % 10;
            j++;
        }
        for(i=0; i<j; ++i)
        {

            in1[i] = find_remainder(in1[i]);
            ++c[in1[i]];

            for(k=1; k<n; ++k)
                c[k]+=c[k-1];

            for(k=n-1; k>-1; --k)
            {
                in2[c[in1[k]]] = in1[k];
                --c[in1[k]];
            }
            y *= 10;
        }

        for(i=1; i<=n; ++i)
            printf("%lld ", in2[i]);
        printf("\n");
    }
    return 0;
}
/*
11
2 3 0 4 1 0 2 3 4 3 2
*/
