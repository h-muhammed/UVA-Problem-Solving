#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t=0, n=0,i,d=0;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lld",&n);
        if(n%2!=0)
        {
            n--;
        }
        d=n/2;
        printf("%lld\n",d);
    }
    return 0;
}
