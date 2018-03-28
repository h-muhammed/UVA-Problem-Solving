#include "bits/stdc++.h"

using namespace std;
#define SZ 21
char matrix[SZ][SZ];
int vis[SZ][SZ],w,h;

int x[]= {-1, 1, 1, -1};
int y[]= { 0, 1, -1, -1};
int bfs(int source, int destination, int cnt);

queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int i, j, k, t, d, cnt=0;
    scanf("%d", &t);
    for(i =1; i<=t; ++i)
    {
        scanf("%d %d", &w ,&h);

        for(j=0; j<h; ++j)
        {

            for(k=0; k<w; ++k)
                scanf(" %c", &matrix[j][k]);
        }
        for(j =0; j<h; ++j)
        {
            for(k=0; k<w; ++k)

                if(matrix[j][k]=='@')
                {
                    cnt++;
                    d=bfs(j,k,cnt);
                }


        }
        printf("Case %d: %d\n",i, d);
        cnt=0;
    }
    return 0;
}

int bfs(int source, int destination, int cnt)
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
            if(p>=0&&p<h && q>=0 && q<w)
            {
                if(matrix[p][q]=='.' && vis[p][q]==0)
                {
                    cnt++;
                    Qrow.push(p);
                    Qclum.push(q);
                    vis[p][q]=1;
                }
            }
        }
        p=a;
        q=b;

    }
    return(cnt);
}
