#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>

int r[100];
int main()
{
    int n, p, i, j,q, ar[100], ar1[100];
    while(scanf("%d", &n)==1)

    {
        memset(r, 0, sizeof(r));
        int k=0;
        scanf("%d", &p);
        for(i = 0; i<p; ++i)
            scanf("%d", &ar[i]);
        scanf("%d", &q);
        for(i = 0; i<q; ++i)
            scanf("%d", &ar1[i]);
        for(i = 1; i<=n; ++i)
        {
            for(j=0; j<p; ++j)
            {
                if(ar[j] == i)
                {
                    r[i] = i;
                    ++k;
                }
            }
            if(r[i]==0)
            {
                for(j =0; j<q; ++j)
                {
                    if(ar1[j] == i)
                    {
                        ++k;
                        r[i]= i;
                    }
                }
            }
        }

        if(k == n)
            printf("I become the guy.\n");
        else
            printf("Oh, my keyboard!\n");
    }
    return 0;
}
