#include "stdio.h"
#include "vector"
#include "string.h"
#include "algorithm"
#include "iostream"

using namespace std;
#define MAX 100000

struct data
{
    int a, b, c;
} ;

bool comp(data p, data q)
{
    p.c < q.c;
}
int par[MAX];

vector <data> v;

int makeset(int n)
{
    for(int i= 1; i<= n; ++i)
        par[i] = i;
}

int MST(int n, int e);

int main()
{
    data u;
    int n, e, mst_cost;
    while(scanf("%d %d", &n, &e) == 2)
    {
        v.clear();

        makeset(n);
        for(int i= 0; i< e; ++i)
        {
            scanf("%d %d %d", &u.a, &u.b, &u.c);
            v.push_back(u);
        }
        mst_cost = MST(n, e);
        printf("Minimum cost is %d\n", mst_cost);
    }
    return 0;
}

int find(int r)
{
    return r==par[r] ? r : par[r] = find(r);
}

int MST(int n, int e)
{
    sort(v.begin(), v.end(), comp);
    int i, p, q, cost=0;

    for(i=0; i<v.size() && i<e-1; ++i)
    {
        p = find(v[i].a);
        q = find(v[i].b);
        if(p==q)
            continue;
        par[p] = q;
        cost += v[i].c;
    }
    printf("\n");
    return cost;
}
