#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long arr[10000001], prime[700000];

int main()
{
    long long n, a, b, i, j, k, cnt=0;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;
         a=sqrt(n);
         prime[cnt++]=2;
         printf("prime=>%lld\n", i);
         for(i=3; i<n; i+=2)
         {
            if(arr[i]==0)
                prime[cnt++]=i;
            k=i*i;
            for(j=k; j<n; j+=k)
                arr[j]=1;
         }
         for(i=0; i<cnt; ++i)
         printf("%d ", prime[i]);
         printf("\n");

    }
    return 0;
}
