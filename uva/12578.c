#include<stdio.h>
#define PI acos(-1)
int main()
{
    double i, t, l, r, w, red, green;
    scanf("%lf", &t);
    for(i = 1; i <= t; ++i)
    {
        scanf("%lf", &l);
        w = 3 * l / 5;
        r = l / 5;
        red = PI * r * r;
        green = (w * l) - red;
        printf("%.2lf %.2lf\n", red, green);
    }
    return 0;
}
