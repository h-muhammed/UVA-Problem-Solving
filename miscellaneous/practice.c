#include <cstdio>

int main()
{
    int n, a, b, i;
    while(scanf("%d", &n)==1)
    {
        int d=0;
        for(i =1; i <=n; ++i)
        {
            scanf("%d %d", &a, &b);
            for(j =1; j<n; ++j)
            {
                if(a==i||b==i)
                    ++d;
            }

        }
        if(d==n)
        printf("0\n");
        else
        printf("%d", n-d);

    }
    return 0;
}
