#include <bits/stdc++.h>
using namespace std;

int num[1005];
int main()
{
    int prime[400], cnt, a, b, d, n, c, i, j, k;
    while(scanf("%d %d", &n, &c) == 2)
    {
        cnt = 0;
        prime[cnt++] = 1;
        prime[cnt++] = 2;
        for(i = 3; i <= n; i += 2)
        {
            if(num[i] == 0)
            {
                prime[cnt++] = i;
                k = i + i;
                for(j = i * i; j <= n; j += k)
                    num[j] = 1;
            }
        }
        b = cnt;
        d = c;
        if(b % 2 == 0)
        {
            c = c * 2;
            a = b / 2;
            if(c < b)
            {
                printf("%d %d:", n, d);

                for(k = 1; k <= c; ++k)
                {
                    if(a - c / 2 >= 0 && a - c / 2 <= b)
                    {
                        printf(" %d", prime[a-c/2]);
                        ++a;
                    }
                }
                printf("\n");
            }
            else
            {
                printf("%d %d:", n, d);

                for(k = 0; k < cnt; ++k)
                {
                    printf(" %d", prime[k]);
                }
                printf("\n");
            }
        }
        else
        {
            c = c * 2 - 1;
            a = b / 2 + 1;
            if(c < b)
            {
                printf("%d %d:", n, d);
                for( k = 1; k <= c; ++k)
                {
                    if(a - c/2-1 >= 0 && a - c/2-1 <= b)
                        printf(" %d", prime[a-c/2-1]);
                    ++a;
                }
                printf("\n");
            }
            else
            {
                printf("%d %d:", n, d);
                for(k = 0; k < cnt; ++k)
                    printf(" %d", prime[k]);
                printf("\n");
            }
        }
    }
    return 0;
}


