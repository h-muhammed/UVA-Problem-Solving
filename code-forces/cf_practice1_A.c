#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, i, j;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)==4)
    {
        if(x1==x2)
        printf("%d %d %d %d\n", x1+y2-y1, y1, x2+y2-y1, y2);
        else if(y1==y2)
        printf("%d %d %d %d\n", y1+x2-x1, x1, y2+x2-x1, x2);
        else if()
        printf("%d %d %d %d\n", x1, y2, x2, y1);
    }
    return 0;
}
