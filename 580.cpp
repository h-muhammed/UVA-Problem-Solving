#include <cstdio>
#include <iostream>
#define lim 5001
#define len 1050

using namespace std;

int ar[lim][len];

void fibonacci();

int main()
{
    fibonacci();
    int n, i, j;
    while(scanf("%d", &n)==1)
    {
        if(n == 0)
        break;
        for(i = len-1; i>0; i--)
        {
            if(ar[n][i] != 0)
                break;
        }
        for(; i >= 0; i--)
            printf("%d", ar[n][i]);
        printf("\n");
    }
    return 0;
}

void fibonacci()
{
    int i, j;
    ar[0][0] = 0;
    ar[1][0] = 1;
    ar[2][0] = 1;

    for(i = 3; i<lim; ++i)
    {
        for(j = 0; j < len; ++j)
        {
            ar[i][j]+= ar[i-2][j]+ar[i-1][j];
            if(ar[i][j]>=10)
            {

                ar[i][j+1] +=ar[i][j]/ 10;
                ar[i][j] %= 10;
            }
        }
    }
    return;
}


