#include <bits/stdc++.h>
using namespace std;

#include <math.h>
int arr[3500000], prime[3200000];
int main()
{
    long long int a,n, i, j, k, cnt=0, tag=0;

    for(i = 3; i <= 33000; i += 2)
    {
        if(arr[i] == 0)
        {
            prime[cnt++] = i;
            k = i + i;
            for(j = i * i; j <= 33000; j += k)
                arr[j] = 1;
        }
    }
    while(scanf("%lld", &n) == 1)
    {
        tag = 0;
        if(n==0)
            break;
        for(i = 0; i <=3200 ; ++i)
        {
            a = n - prime[i];
            if(arr[a] == 0&&a>=prime[i])
            {
                tag++;
            }
        }
     if(n==4)
        printf("1\n");
     else
            printf("%lld\n", tag);

    }
    return 0;
}
