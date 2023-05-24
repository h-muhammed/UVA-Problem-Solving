#include<stdio.h>
#include <math.h>
int main ()
{
    long long a,b , c,d;
    while(scanf("%lld %lld",&a, &b)==2)
    {

    c = pow(a,b);
    d = c % 100 ;
    printf("%lld" , d);
    }
    return 0 ;
}
