#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void print(int i, int j);
void LCS();
char xx[1000], yy[1000];
int  mat[1000][1000],d=0;

int main()
{
    int t, i;
    scanf("%d", &t);
    for(i =  0; i<t; ++i)
    {
        gets(xx);
        gets(yy);
        ++d;
        LCS();
    }
    return 0;
}

void LCS()
{
    int m, n, i, j;
    m = strlen(xx);
    n = strlen(yy);
    for(i = 0; i <= m ; i++)
        mat[0][i] = 0;
    for(j = 0; j <= n; j++)
        mat[j][0] = 0;
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(xx[i-1] == yy[j-1])
                mat[j][i] = mat[j-1][i-1] + 1;
            else if(mat[j-1][i] > mat[j][i-1])
                mat[j][i] = mat[j-1][i] + 0;
            else
                mat[j][i] = mat[j][i-1] + 0;
        }
    }

    printf("Case #%d:\n", d, mat[j-1][i-1]);
return;
}
