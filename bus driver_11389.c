#include <stdio.h>
int main()
{
    int n, d, r, i, j, l=0, ar[1003], arr[1003], ar1[1003][100], x=2140000000, y=0;
    while(scanf("%d %d %d", &n, &d, &r)==3)
    {
        x=2140000000;
        l=0;
        for(i=0; i<n; ++i)
            scanf("%d %d", &ar[i], &arr[i]);
        if(n==0||d==0||r==0)
            break;
        for(i=0; i<n; ++i)
        {
            for(j=0; j<n; ++j)
            {
                ar1[i][j]=ar[i]+arr[j];
            }
        }
        for(i=0; i<n; ++i)
        {
            for(j=0; j<n; ++j)
            {
                if(ar1[i][j]>=d)
                    y+=ar1[i][j]-d;
            }
            ar[l++]=y;
            y=0;
        }
        for(j=0; j<l; ++j)
        {
            if(x>ar[j])
                x=ar[j];
        }
        x*=r;
        printf("%d\n", x);

    }
    return 0;
}
