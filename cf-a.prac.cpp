#include <cstdio>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        int res = 3*n*(n+1)+1;
        printf("%d\n", res);
    }
    return 0;
}
