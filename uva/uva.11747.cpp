#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int v, e, par[10010], rank[10010], cnt, sum, d=0;

typedef struct
{
    int start, end,cost;
} edge;
edge s[25010],E[25010];

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
void kruskal()
{
    for(int i=0; i<e; ++i)
    {
        if(find_set(E[i].start)!=find_set(E[i].end))
        {
            union_(E[i].start,E[i].end);

        }
        else
            s[cnt++] = E[i];
    }
    return;
}

int initialize(int par[], int rank[], int v)
{
    int i;
    for(i=0; i<v; ++i)
    {
        par[i]=i;
        rank[i]=0;
    }
    return 0;
}

int main()
{
    int i;
    while(scanf("%d %d",&v,&e)==2)
    {
        if(v == 0 && e == 0)
            break;

        cnt=0;
        initialize(par, rank, v);
        for(i=0; i<e; ++i)
        {
            scanf("%d %d %d",&E[i].start,&E[i].end,&E[i].cost);
        }

        sort(E+1, E+e+1, comp);

        kruskal();
        // if(cnt>0)
        //{

        for(i=0; i<cnt; ++i)
        {
            printf("%d", s[i].cost);
            if(i!=cnt-1)
                printf(" ");
        }
//        }
//        else
//        {
//            printf("forest\n");
//        }
        printf("\n");

    }
    return 0;
}

