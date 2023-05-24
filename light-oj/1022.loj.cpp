#include <cstdio>
#include <math.h>
#define pi 2 * acos (0.0)
int main()
{
    int t;
    float r, d, a, shad;
    scanf("%d", &t);
    for(int i =1; i<=t; ++i)
    {
        scanf("%f", &r);
        d = (pi * r * r);
        r=r+r;
        a=r*r;
        shad = a-d;
        printf("Case %d: %.2f\n", i, shad);
    }
    return 0;
}
