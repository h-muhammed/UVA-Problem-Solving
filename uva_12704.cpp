#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,r;
    double m1,m2,m3,s;
    int cas,i;
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        scanf("%d %d %d",&x,&y,&r);

    s=(double)sqrt(x*x+y*y);
    double lng = s+r;
    double sht = r-s;
    printf("%.2lf %.2lf\n", sht, lng);
    }
    return 0;
}

