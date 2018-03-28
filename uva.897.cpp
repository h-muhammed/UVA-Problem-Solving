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
long long arr[10000000],prime[8000000];;
int main()
{
    long long i, j, n , k, m, l=1;


    for(i = 3; i<=10000000; i+=2)
    {

        if(arr[i] == 0)
        {
            prime[l++]=i;
            j = i+i;
            for(k = i*i; k <= 10000000; k +=i)
                arr[k] = 1;
        }
    }

    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        break;
        prime[0]=2;
        int a, b, d=n, p=0, f=0;
        for(i =0 ; i<n; ++i)
        {
            d=n-1;
            for(j =i; j<n; ++j)
            {

                if((prime[i] + prime[d--])==n)
                {
                    f++;
                    a = i, b = d+1;
                    break;
                }
            }
            if(f!=0)
                break;
        }
        if(f==0)
            printf("NO WAY!\n");
        else
            printf("%lld:\n\n%lld+%lld\n", n, prime[a], prime[b]);
    }
    return 0;
}
