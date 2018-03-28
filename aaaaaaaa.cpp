#include "bits/stdc++.h"
using namespace std;

int p[]={-1, -1, -1, 0, 0, 1, 1, 1};
int q[]={-1, 0, 1, -1, 1, -1, 0, 1};
char matrix[30][30];
bool vis[30][30];

queue <int> Qrow;
queue <int> Qclm;

void war(int start , int finish);
int main()
{
    int i, j, k, m, l=0, f=0;
    memset(matrix, 0, sizeof(matrix));
    while(scanf("%d", &m)==1)
    {
        getchar();
        ++f;
        memset(matrix, 0, sizeof(matrix));
        for(i=0; i<m; ++i)
        {
            for(j=0; j<m; ++j)

                scanf("%c", &matrix[i][j]);
                getchar();
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; ++j)
            {
                if(matrix[i][j]=='1')
                {
                    ++l;
                    war(i, j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", f, l);
        l=0;
    }
    return 0;
}

void war(int start , int finish)
{
    memset(vis, 0, sizeof(vis));
    while(!Qrow.empty())
    {
        Qrow.pop();
        Qclm.pop();
    }
    vis[start][finish]=1;
    Qrow.push(start);
    Qclm.push(finish);
    int i, a, b, x, y;
    while(!Qrow.empty())
    {
        x=Qrow.front();
        y=Qclm.front();
        matrix[x][y]='0';
        a=x;
        b=y;
        Qrow.pop();
        Qclm.pop();
        for(i=0; i<8; ++i)
        {
            x+=p[i];
            y+=q[i];
            if(x>=0&&y>=0)
            {
                if(matrix[x][y]=='1'&&vis[x][y]==0)
                {
                    Qrow.push(x);
                    Qclm.push(y);
                    vis[x][y]=1;
                }
            }
            x=a;
            y=b;
        }
    }
    return ;
}
