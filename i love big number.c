#include <stdio.h>
#include <string.h>
int ar[100003], arr[100000];
int main()
{
    int n, d, g, x=0, y, i, j, k, l=0;
    while(scanf("%d", &n)==1)
    {

        d=n-1;
        g=n;
        for(i=0; n!=0; ++i)
        {
            ar[i]=n%10;
            n/=10;
        }
        for( ; d!=0; )
        {
            for(j=0 ; j<=i-1; j++)
            {
                y=ar[j]*d+x;
                ar[l++]=y%10;
                x=y/10;
            }
            if(x!=0)
                {
                    for( ;x!=0; )
                    {
                        ar[l++]=x%10;
                        x/=10;
                    }
                }

            i=l;
            l=0;
             --d;
        }
        x=0;
        for(;i-1>-1;)
        {
            x+=ar[i];
            i--;
        }
        printf("%d\n", x);
        x=0;
    }
    return 0;
}
