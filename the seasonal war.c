#include "bits/stdc++.h"
using namespace std;
int p[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int q[] = {-1, 0, 1, -1, 1, -1, 0, 1};

char matrix[110][110];
bool vis[110][110];

int deposite(int start, int finish);
queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int i, j, k, m, l=0, f=0;
    while(scanf("%d %d", &m)==1)
    {
        ++f;
        getchar();
        memset(matrix, 0, sizeof(matrix));
        for(i=0; i<m; ++i)
        {
            for(j=0; j<m; ++j)
                scanf("%c", &matrix[i][j]);
            getchar();
        }
        for(i=0; i<m; ++i)
        {
            for(j=0; j<m; ++j)
            {
                if(matrix[i][j]=='1')
                {
                    ++l;
                    k=deposite(i, j);
                }
            }
        }
        printf("Image number %d contains %d war eagles\n", f, l);
        l=0;
        f=0;
    }
    return 0;
}
int deposite(int start, int finish)
{
    memset(vis, 0, sizeof(vis));
    while(!Qrow.empty())
    {
        Qrow.pop();
        Qclum.pop();
    }
    vis[start][finish]=1;
    Qrow.push(start);
    Qclum.push(finish);
    int i, x, y, a, b;
    while(!Qrow.empty())
    {
        x=Qrow.front();
        y=Qclum.front();
        matrix[x][y]= '0';
        a=x;
        b=y;
        Qrow.pop();
        Qclum.pop();
        for(i=0; i<8; ++i)
        {
            x+=p[i];
            y+=q[i];
            if(x>=0&&y>=0)
            {
                if(matrix[x][y]=='1' && vis[x][y]==0)
                {
                    Qrow.push(x);
                    Qclum.push(y);
                    vis[x][y]=1;
                }
            }
            x=a;
            y=b;
        }
    }
    return;
}

