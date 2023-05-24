#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long n, a, b, arr[10000000], prime[1000005];

int main()
{
    long long i, j, k, d, cnt =0, tag=0, flag;
    scanf("%lld", &n);
    for(k=0; k<n; ++k)
    {
        flag=0;
        cnt=0;
        scanf("%lld %lld", &a, &b);
        prime[cnt++]=2;
        prime[cnt++]=3;
        prime[cnt++]=5;
        for(i=7; i<=b/2; i+=2)
        {
            if(arr[i]==0)
                prime[cnt++]=i;
            for(j=2*i; j<=b/2; j=2*i)
                arr[j]=1;
        }

        if(a%2==0)
        {
            for(i=a; i<=b; i++)
            {
                for(j=0; (j<cnt&&i>3); ++j)
                {
                    if(i%prime[j]==0&&i!=prime[j])
                        ++tag;
                }
                if(tag==1)

                    ++flag;
                tag=0;
            }
            printf("%d\n", flag);
        }
        else
        {
            a+=1;
            for(i=a; i<=b; i++)
            {
                for(j=0; (j<cnt&&i>3); ++j)
                {
                    if(i%prime[j]==0&&i!=prime[j])
                        ++tag;
                }
                if(tag==1)
                    ++flag;
                tag=0;
            }
            printf("%d\n", flag);
        }
    }
    return 0;
}
