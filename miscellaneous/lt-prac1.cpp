#include <cstdio>
#include <cstring>

int main()
{
    long long n, m, i, t, j,d;
    char n
    scanf("%lld", t);
    for(i = 1; i<=t; ++i)
    {
        scanf("%lld %lld", &n , &m);
        for(i = n; i<=m; ++i)
        {
            d=i;
            while(d>0)
            {
                if(d%10==5||d%10==7)
                    d/=10;
                else
                {
                    ++p;
                    break;
                }
            }
            if(p==0)
                int res +=1;
        }
        printf("Case %lld: %d\n",i,res);
    }
}
