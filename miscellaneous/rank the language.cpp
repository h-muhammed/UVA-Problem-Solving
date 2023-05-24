#include <cstdio>
#include <cstring>
#include <map>
#include <queue>
#include <iostream>
using namespace std;
int o[] = {-1, 0, 0, 1};
int q[] = {0, -1, 1, 0};

char matrix[250][250];
bool vis[200][200];
int cell(int i, int j, int n, int m);
queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int n, m, i, j, k, t, l=0, x=0, p;
    scanf("%d", &t);
    for(i=0; i<t; ++i)
    {
        scanf("%d %d", &n , &m);
        getchar();
        memset(matrix, 0 , sizeof matrix);
        memset(vis, 0, sizeof vis);
        for(i=0; i<n; ++i)
        {
            for(j=0; j<m; ++j)
            {
                scanf("%c", &matrix[i][j]);
                getchar();
            }
        }
        for(p=0; p<n; ++p)
        {
            for(j=0; j<m; ++j)
            {

                if(matrix[i][j]!='*')
                {
                    vis[i][j]=1;
                    k=cell();
                    if(x<k)
                        x=k;
                }
            }
        }
    }
    printf("%d\n", x);
    x=0;
    return 0;
}

int cell(int i, int j, int n, int m)
{
    int p, u, v;
    char ch;
    if((i>-1&&-1<j)&&(i<n&&m>j))
    {
        if(vis[i][j]==1)
        {
           matrix[i][j]='*';
           for(p=0; p<4; ++p)
           {
               u=i+o[p];
               v=j+q[p];
               ch=
               cell(u, v);
           }
        }
    }

    return;
}



