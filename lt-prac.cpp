#include <cstdio>

int main()
{
    long long n, i, t, d;
    scanf("%lld", &t);
    for(i = 1; i<=t; ++i)
    {
        d=0;
        scanf("%lld", &n);
        while(n>0)
        {
            if(n%2==0)
                n/=2;
            else
            {
                ++d;
                n/=2;
            }

        }
        d+=1;
        if(d%2==0)
        printf("Case %lld: Even\n",i);
        else
        printf("Case %lld: Odd\n", i);
    }
    return 0;
}
