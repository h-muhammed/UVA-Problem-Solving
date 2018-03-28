#include <stdio.h>
#include <string.h>
char arr[10001][100000];
int main()
{
    int n, x=0, a, y, i, j, k, l=0;
    strcpy(arr[0],"1");
    strcpy(arr[1],"1");
    for(i=2; i<=10000; ++i)
    {
        n=i;
        a=strlen(arr[i-1]);
        for(j=0,a=a-1; a>-1; --a, ++j)
        {
            y=(arr[i-1][j]-48)*n+x;
            arr[i][j]=(y%10)+48;
            x=y/10;
        }
        while(x!=0)
        {
            arr[i][j++]=(x%10)+48;
            x/=10;
        }
    }
    while(scanf("%d", &n)==1)
    {
        j=strlen(arr[n]);
        k=j;
        for(i=0; i<j; ++i)
        {

            if(arr[n][i]!='0')
            {
                printf("%5d -> %c\n", n, arr[n][i]);
                break;
            }
        }
    }
    return 0;
}
