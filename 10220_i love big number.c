#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000], arr[1000];
    int n, i, j, k, d, a, b, x, y, z=0;
    while(scanf("%d", &n)==1)
    {
        d=n;
        for(i=0; n>0; ++i)
        {
            a=n%10;
            n/=10;
            ar[i]=a+'0';
             printf("%c\n", ar[i]);
        }
        for( ; d>0; )
        {
            --d;
            for(j=0; x>0;j++)
            {
                b=ar[j]-'0';
                x=d*b;
                x+=z;
                a=x%10;
                arr[j]=a+'0';
                 printf("arr=>%c\n", arr[j]);
                z=x/10;
            }
        }
        if(z==0)
                 ;
                else
                {
                    while(z>0)
                    {
                        a=z%10;
                        arr[j]=a+'0';
                        z/=10;
                    }
                }
       // for(;--j;)


           // printf("%c", arr[j]);
        //printf("\n");
    }
    return 0;
}
