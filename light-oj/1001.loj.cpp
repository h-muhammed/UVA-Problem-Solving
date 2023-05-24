#include <cstdio>
int main()
{
    int i, t, a ,b, sum;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)
    {
        scanf("%d", &a);
        sum = a/2;
        b = a-sum;
        printf("%d %d\n", b, sum);
    }
    return 0;
}

