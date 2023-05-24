#include <cstdio>

#include <math.h>

int main()
{
    int t, i, j, a, b=0, n;
    double d, x1, x2,r;
    scanf("%d", &t);
    for(i = 1; i <=t; ++i)
    {
        b=0;
        scanf("%lf %d", &r, &n);
        for(j = 0; j <n; ++j)
        {
            scanf("%lf %lf", &x1, &x2);
            if(x1<0)
            x1*=-1;
            if(x2<0)
                x2*=-1;
            d= sqrt(x1*x1 + x2*x2);
                if(d <= r)
                    ++b;
        }
        printf("Case %d: %d\n",i, b);
    }
    return 0;
}
