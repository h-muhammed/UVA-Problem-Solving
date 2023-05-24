#include <cstdio>

int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
       if(n%2==0)

        printf("%d %d\n", n-4, 4);
        else
        printf("%d %d\n", n-9, 9);
    }
    return 0;
}

