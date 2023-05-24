#include <cstdio>
#include <math.h>
#define pi 3.1416

int main()
{
    int a, b, c;
    double res1,s,R,ar_trigle,ccir_rdius,ar_ccir,ar_voilet,ar_sunflwer;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        int res = (a>b)?a:b;
        res1 = (res>c)?res:c;

        s=(double)(a+b+c)/2.0;

        ar_trigle= sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/ar_trigle;
        if(a==res1)
            ccir_rdius=ar_trigle/s;
        else if(b==res1)
            ccir_rdius=ar_trigle/s;
        else
            ccir_rdius=ar_trigle/s;
        ar_ccir=pi*ccir_rdius;
        ar_voilet=ar_trigle-ar_ccir;
        ar_sunflwer=(R*R)*pi-ar_trigle;
        printf("%.4lf %.4lf %.4lf\n", ar_sunflwer, ar_voilet, ar_ccir);
    }
    return 0;
}
