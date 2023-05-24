#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    long long n, a, b, i ,d=0;
    int cnt;
    while(scanf("%lli", &n)==1)
    {
        b=0;
        cnt=0;
        if(n==0)
            break;

        a=fabs(n);
        for(i=2; i*i<=a; ++i)
        {
            while(n%i==0)
            {
                if(b!=i)
                {
                    ++d;
                }
                b=i;
                n/=i;
            }
        }
        if(n != 1 && n != -1 && n != a)
        {
            b=fabs(n);
            ++d;
        }
        if(d>1)
            printf("%lli\n", b);
        else
            printf("%d\n", -1);


    }
    return 0;
}
