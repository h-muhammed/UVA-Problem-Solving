#include <cstdio>

using namespace std;

int main()
{
    long long p=1, k=0;
    int n, i,c=0, ar[19];
    while(scanf("%d", &n)==1)
    {
        ++c;
        for(i = 1; i<= n; ++i)
        {
            scanf("%d", &ar[i-1]);
            if(ar[i-1]>0)
             p *= ar[i-1];
            if(p>k)
                k = p;
        }
            printf("Case #%d: The maximum product is %lld.\n", c, k);
            printf("\n");
        p = 1;
        k=0;
    }
    return 0;
}
