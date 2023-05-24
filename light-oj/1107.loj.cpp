#include <cstdio>

int main()
{
    int i, j, n, x1, x2,y1, y2, x,y,t;
    scanf("%d", &t);
    for(i =1; i <=t; ++i)
    {
        printf("Case %d:\n", i);
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &n);
        for(j = 0; j <n; ++j)
        {
            scanf("%d %d", &x, &y);
            if(x<x2&& x>x1 && y<y2 && y>y1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
