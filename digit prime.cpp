#include <bits/stdc++.h>
using namespace std;

long long  arr[1000005], tab[1000005], prime[90000];
int main()
{
    long long a, n, i, j, k, t, m, y, b, d, cnt = 0, tag, x, p;
    arr[0] = 1, arr[1] = 1;
    for(p = 4; p <= 1000000; p += 2)
        arr[p] = 1;
    tab[2] = 1;
    prime[cnt++] = 2;
    for(i = 3; i <= 1000000; i += 2)
    {
        x = 0;
        if(arr[i] == 0)
        {
            prime[cnt++] = i;
            a = i;
            while(a != 0)
            {
                b = a % 10;
                a /= 10;
                x += b;
            }
            if(arr[x] == 0)
                tab[i] = 1;
            k = i + i;
            for(j = i * i; j <= 1000000; j += k)
                arr[j] = 1;
        }
    }
    x = 0;
    for(i = 0; i <= 1000000; ++i)
    {
        x += tab[i];
        tab[i]=x;
    }
    scanf("%lld", &t);
    for(p = 0; p < t; p++)
    {
        scanf("%lld %lld", &m, &n);
        tag = tab[n]-tab[m-1];
        printf("%lld\n", tag);
    }
    return 0;
}
