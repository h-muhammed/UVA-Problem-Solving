#include<stdio.h>
int main()
{
    long long a, b, c, t, i;
    scanf("%lld", &t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a+b>c && a+c>b && b+c>a)
        {
           if(a==b&&a==c&&b==c)
                printf("Case %lld: Equilateral\n", i);
           else if(a!=b&&a!=c&&b!=c)
            printf("Case %lld: Scalene\n", i);
           else
            printf("Case %lld: Isosceles\n", i);
        }
        else
            printf("Case %lld: Invalid\n", i);
    }
    return 0;
}
