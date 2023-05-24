#include <cstdio>

int main()
{
    int i, j, n, t, d=0;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)

    {
        d=0;
        scanf("%d", &n);
        while(n>0)
        {
            if(n%2!=0)
            {
                ++d;
                n/=2;
            }
            else
                n/=2;
        }
        if(d%2==0)
            printf("Case %d: even\n",i);
        else
            printf("Case %d: odd\n", i);

    }
    return 0;
}
