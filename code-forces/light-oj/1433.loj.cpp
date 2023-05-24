#include <cstdio>
#include <math.h>

int main()
{
    int t, i, j;
    double a1,a2,b1,b2,o1,o2, d, m;
    scanf("%d", &t);
    for(i = 1; i<=t; ++i)
    {
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &o1, &o2);
        d=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2))/2;
        double thita = asin(d/sqrt((o1-a1)*(o1-a1)+(o2-a2)*(o2-a2)));
        thita *= 2;
        double arc = (thita * sqrt((o1-a1)*(o1-a1)+(o2-a2)*(o2-a2)));
        printf("Case %d: %.5lf\n",i, arc);
    }
    return 0;
}
