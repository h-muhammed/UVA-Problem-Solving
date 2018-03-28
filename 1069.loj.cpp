#include <cstdio>

int main()
{
    int i, t, a, b,res;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)
    {
        scanf("%d %d", &a, &b);
        if(b>=a)
            res =19+4*b;
        else
        {
            b=a-b;
            res=19+(a*4 + b*4);
        }
        printf("Case %d: %d\n", i, res);
    }
    return 0;
}
