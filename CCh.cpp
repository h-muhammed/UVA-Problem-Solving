#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t,i, j, k, ar[1010];
    double n,sum;
    scanf("%d", &t);
    for(j=1;j<=t;++j)
    {
        sum=0;
        scanf("%lf", &n);
        for(i=0; i<(int)n;++i)
        {
            scanf("%lf", &ar[i]);
            sum+=ar[i];
        }
        if(sum == 100)
        printf("YES\n");
        else
        {
            n=n/2;
            sum-=n;
            if(sum==100)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    return 0;
}
