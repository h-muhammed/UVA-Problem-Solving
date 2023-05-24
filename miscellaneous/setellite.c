#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 2 * (acos(0))

int main()
{
    double s, a, b, c, g, d, r = 6440;
    char str[4];
    while(scanf("%lf %lf %s", &s, &a, str) == 3)
    {
         b = r + s;
        if(strcmp(str, "deg")==0)
        {

            printf("%.6lf %.6lf\n", d, c);
        }
        else
        {

            printf("%.6lf %.6lf\n", d, c);
        }
    }
     return 0;
}
