#include <stdio.h>

int main()
{
    long long n, m, o,a, b, d,c;
        while(scanf("%lld %lld %lld", &n, &m , &o) == 3)
    {
        if(n != 0 && m != o &&o != 0)
        {
            b = (n > o && n > m)? n :(m > o && m > n)? m : o;
            printf("%d", b);
            d = ((n < m && n > o) || (n < o && n > m)) ? n :
                    ((m > n && m < o) || (m < n && m > o)) ? m : o;
            printf("%d", d);
            c = (n< o && n< m) ? n : (m < o && m < n) ? m : o;
            printf("%d", c);
            a = (d*d + c*c);
            if((b*b) == a)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else
            break;

    }
}
