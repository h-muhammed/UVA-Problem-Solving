#include <cstdio>
#include <math.h>

int main()
{
    int a, b, c;
    double res;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        res= sqrt(2*(a*a*b*b + b*b*c*c + c*c*a*a) - (a*a*a*a + b*b*b*b + c*c*c*c));
        res/=3;
        printf("%.3lf\n", res);
    }
    return 0;
}
