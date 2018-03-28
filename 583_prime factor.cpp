#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int num[55000];
int main()
{
    int n, i, j, k, l, prime[5500], a, b, d, g, p, cnt, arr[5500];
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
            p=n;
        if(n<0)
            n=-n;
            g=n;
        b=sqrt(n);
        cnt = 0;
        l = 0;
        prime[cnt++] = 2;
        for( i = 3; i <= 55000; i += 2)
        {
            if(num[i] == 0)
            {
                prime[cnt++] = i;
                k = i + i;
                for(j = i*i; j <= 55000; j += k)
                    num[j] = 1;
            }
        }
       i=0;
      while(i<sqrt(n)+1)
        {
                if(n % prime[i] == 0)
                {
                    arr[l++] = prime[i];
                    n/=prime[i];
                }
        }
        d=l;
        if(p > 0)
        {
            printf("%d =", g);
            for(j = 0; j < d; ++j)
            {
                 printf(" %d", arr[j]);
                if(j<d-1)
                    printf(" x");
            }
            printf("\n");
        }
        else
        {
            printf("%d = -1 x", g);
            for(j = 0; j < d; ++j)
            {
                printf(" %d", arr[j]);
                if(j<d-1)
                    printf(" x");
            }
            printf("\n");
        }
    }
    return 0;
}
