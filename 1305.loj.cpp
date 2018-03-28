#include <cstdio>
#include <math.h>

int main()
{
    int a1, a2, b1, b2, c1, c2, d1, d2, t, i,j, area;

    scanf("%d", &t);
    for(i = 1; i <=t; ++i)
    {
        scanf("%d %d %d %d %d %d", &a1, &a2, &b1,&b2,&c1,&c2);
        int d1=(a1+c1-b1);
        int d2 = (a2+c2-b2);


        area= ((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2)-(a2*b1)-(b2*c1)-(c2*d1)-(d2*a1))/2;
        if(area<0)
        area*=-1;
        printf("Case %d: %d %d %d\n", i, d1, d2, area);
    }
    return 0;
}
