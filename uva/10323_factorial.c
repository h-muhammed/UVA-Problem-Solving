#include <stdio.h>
int main()
{
    long long n, count, ans ;
    while(scanf("%lld", &n) == 1)
    {
        if(n>=8&&n<=13)
        {
            ans = 1;
            for(count = 1; count <= n; ++count)
                ans *= count;
            printf("%lld\n", ans);
        }
        else if(n < 0)
        {
            if(n % 2 == 0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
        }

        else if(n<8)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");
    }
    return 0;
}
