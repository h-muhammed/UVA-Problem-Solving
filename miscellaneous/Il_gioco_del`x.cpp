#include "bits/stdc++.h"
using namespace std;

int X[]= {-1, -1, 0, 0, 1, 1};
int Y[]= {-1, 0, -1, 1, 0, 1};

char matrix[300][300];

queue <int> Qrow;
queue <int> Qclm;

int n, ii, jj;
int bfs(void);

int main()
{
    int i, j, k, l,f=0, d, ar[100];
    while(scanf("%d", &n)==1)
    {
        d=0;
        l=0;
        if(n==0)
            break;
        ++f;
        for(i=0; i<n; ++i)
        {
            scanf("%s", matrix[i]);
        }
        for(j=0; j<n; ++j)
        {
            i=0;
            if(matrix[i][j]=='b')
            {
                ii = i;
                jj = j;
                k=bfs();
                ar[l++]=k;
            }
        }
        for(k=0; k<=l-1; ++k)
        {
            if(ar[k]==n-1)
            {
                ++d;
                printf("%d B\n", f);
                break;
            }
        }
        if(d==0)
            printf("%d W\n", f);
    }
    return 0;
}

int bfs(void)
{
    while(!Qrow.empty())
    {
        Qrow.pop();
        Qclm.pop();
    }
    Qrow.push(ii);
    Qclm.push(jj);
    matrix[ii][jj]='w';
    int p, q, x, y, a, b, h=0;
    while(!Qrow.empty())
    {
        x=Qrow.front();
        y=Qclm.front();
        a=x;
        b=y;
        Qrow.pop();
        Qclm.pop();
        for(p=0; p<6; ++p)
        {
            x = a + X[p];
            y = b + Y[p];
            if((x>-1 && y >-1) && (x<n && y<n))
            {
                if(matrix[x][y]=='b')
                {
                    if(x > h)
                        h = x;
                    Qrow.push(x);
                    Qclm.push(y);
                    matrix[x][y]= 'w';
                }
            }
        }
    }
    return h;
}
