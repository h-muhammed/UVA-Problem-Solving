#include <cstdio>
#include <cstring>
int main()
{
    int n, a, b, i;
    while(scanf("%d", &n)==1)
    {
        int d=0;
        for(i =1; i <=n; ++i)
        {
            scanf("%d %d", &a, &b);

           if(b-a >1)
           ++d;
        }
            printf("%d\n", d);

    }
    return 0;
}
