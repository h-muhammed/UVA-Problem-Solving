#include "bits/stdc++.h"
using namespace std;
int p[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int q[] = {-1, 0, 1, -1, 1, -1, 0, 1};

char matrix[110][110];
bool vis[110][110];

void deposite(int start, int finish);
queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int i, j, k, m, n, l=0;
    while(scanf("%d %d", &m, &n)==2)
    {
        if(m==0)
            break;
        getchar();
        memset(matrix, 0, sizeof(matrix));
        for(i=0; i<m; ++i)
        {
            for(j=0; j<n; ++j)
                scanf("%c", &matrix[i][j]);
            getchar();
        }
        for(i=0; i<m; ++i)
        {
            for(j=0; j<n; ++j)
            {
                if(matrix[i][j]=='@')
                {
                    ++l;
                    deposite(i, j);
                }
            }
        }
        printf("%d\n", l);
        l=0;
    }
    return 0;
}
void deposite(int start, int finish)
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
    int i, x, y, a, b, g=0, h=0;
    while(!Qrow.empty())
    {
        ++h;
        x=Qrow.front();
        y=Qclum.front();
        matrix[x][y]= '*';
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
                if(matrix[x][y]=='@' && vis[x][y]==0)
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
