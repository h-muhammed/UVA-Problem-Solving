#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int v, e, par[200010], rank[200010], cnt, sum;

typedef struct
{
    int start, end,cost;
} edge;
edge s[200010],E[200010];

bool comp(edge p, edge q)
{
    return p.cost < q.cost;
}

void Link(int x,int y)
{
    if(rank[x]>rank[y])
        par[y]=x;
    else
    {
        par[x]=y;
        if(rank[x]==rank[y])
            ++rank[y];
    }
}

int find_set(int i)
{
    if(par[i]!=i)
        par[i]=find_set(par[i]);
    return par[i];
}

void union_(int x,int y)
{
    Link(find_set(x),find_set(y));
}
void kruskal(edge E[], edge s[],int v, int e)
{
    for(int i=0; i<e; ++i)
    {
        if(find_set(E[i].start)!=find_set(E[i].end))
        {
            union_(E[i].start,E[i].end);
        }
        else
            s[cnt++]=E[i];
    }
    return;
}

void initialize(void)
{
    int i;
    for(i=0; i<v; ++i)
    {
        par[i]=i;
        rank[i]=0;
    }
    return;
}

int main()
{
    int i,a,b,d=0, p;
    while(scanf("%d %d",&v,&e)==2)
    {
        if(v == 0 && e == 0)
            break;
        cnt=0;
        initialize();
        for(i=1; i<=e; ++i)
        {
            scanf("%d %d %d",&E[i].start,&E[i].end,&E[i].cost);
        }
        sort(E+1, E+e+1, comp);

        kruskal(E, s, v, e);
        if(cnt == 0)
            printf("forest\n");
        else
        {
            for(i=0; i<cnt; ++i)
            {
                printf("%d", s[i].cost);
            }
            printf("\n");
        }

    }
    return 0;
}

