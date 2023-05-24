#include "bits/stdc++.h"

using namespace std;
#define SZ 100
char matrix[SZ][SZ];
int vis[SZ][SZ], n;

int x[]= {-1, 1, 1, -1};
int y[]= { 0, 1, -1, -1};
void bfs(int source, int destination);

queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int i, j, k, t, d, cnt=0;
    scanf("%d", &t);
    for(i =1; i<=t; ++i)
    {
        scanf("%d", &n);

        for(j=0; j<n; ++j)
        {

            for(k=0; k<n; ++k)
                scanf(" %c", &matrix[j][k]);
        }
        for(j =0; j<n; ++j)
        {
            for(k=0; k<n; ++k)

                if(matrix[j][k]=='x')
                {
                    cnt++;
                    matrix[j][k]='.';
                    bfs(j,k);
                }


        }
        printf("Case %d: %d\n",i, cnt);
        cnt=0;
    }
    return 0;
}

void bfs(int source, int destination)
{
    memset(vis, 0, sizeof(vis));
    while(!Qrow.empty())
    {
        Qrow.pop();
        Qclum.pop();
    }
    vis[source][destination]=1;
    Qrow.push(source);
    Qclum.push(destination);
    while(!Qrow.empty())
    {
        int i, p, q, a ,b;
        p=Qrow.front();
        q=Qclum.front();
        Qrow.pop();
        Qclum.pop();
        a=p;
        b=q;
        for(i=0; i<4; ++i)
        {
            p+=x[i];
            q+=y[i];
            if(p>=0&&p<n && q>=0 && q<n)
            {

                if(matrix[p][q]=='x' || matrix[p][q]=='@' && vis[p][q]==0)
                {
                    matrix[p][q]='.';
                    Qrow.push(p);
                    Qclum.push(q);
                    vis[p][q]=1;
                }
            }
        }
        p=a;
        q=b;

    }
    return;
}

