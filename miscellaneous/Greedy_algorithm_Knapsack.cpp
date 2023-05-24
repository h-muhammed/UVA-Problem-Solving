#include<cstdio>
#include<cstring>
#include<iostream>
#include <math.h>
using namespace std;
#define s scanf
#define p printf
typedef struct
{
    int value,weight;
}str;
str arr[100];
int main()
{
    int mat[101][101];
    int a,b,c,i,j,max_w,item;
    while(s("%d",&item)==1)
    {
        for(i=1;i<=item;++i)
        s("%d %d",&arr[i].value,&arr[i].weight);

        memset(mat,0,sizeof(mat));

        s("%d",&max_w);
        for(i=1;i<=item;++i)
            {
                for(j=1;j<=max_w;++j)
                {
                    if(j-arr[i].weight<0)
                    continue;
                    mat[i][j]=max(mat[i-1][j], arr[i].value+mat[i-1][j-arr[i].weight]);
                }
            }
        p("Maximum profit is: %d\n\n",mat[item][max_w]);
    }
    return 0;
}
/*
Input:
4
10 5
40 4
30 6
50 3
10
Output:
Maximum profit is: 90
*/

