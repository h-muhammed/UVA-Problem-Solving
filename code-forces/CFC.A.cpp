#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
int ap[40000];
int main()
{
    int a, b, c, d, i, sum, ar[40000], ap[40000];
    while(scanf("%d %d", &a, &b)==2)
    {
        sum=0;
        memset(ap, 0, sizeof(ap));
        for(i=0; i<a-1; ++i)
            scanf("%d", &ar[i]);
        for(i=0; i<a-1; )
        {
            sum+=ar[i];
            ap[i+sum]=1;
            i+=sum;
            sum=0;
        }
        if(ap[b-1]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
