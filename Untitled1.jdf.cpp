#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#define M 1000
using namespace std;

char graph[M][M];
struct Hole{char ch;int dep;};

int n,H,W;
int next[8][2]={{1,0},{0,1},{-1,0},{0,-1}};
struct Rank{char ch;int r;};
struct Rank R[26];

void DFS(int,int);
bool comp(Rank,Rank);

int main()
{
    int t,i,j,k;
    //freopen("in.txt","r",stdin);
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {
        scanf("%d%d\n",&H,&W);
        for(i=0;i<H;i++)
            gets(graph[i]);

        for(i=0;i<26;i++)
            R[i].ch='\0',R[i].r=0;

        for(i=0;i<H;i++)
            for(j=0;j<W;j++)
                if(graph[i][j]!='.')
                {
                    R[graph[i][j]-97].r++;
                    R[graph[i][j]-97].ch = graph[i][j];
                    DFS(i,j);
                }
        sort(R,R+26,comp);

        printf("World #%d\n",k);
        for(i=0;R[i].r;i++)
            printf("%c: %d\n",R[i].ch,R[i].r);
    }
    return 0;
}

void DFS(int x,int y)
{
    int tx,ty,i;
    char ch = graph[x][y];
    graph[x][y] = '.';

    for(i=0;i<8;i++)
    {
        tx = x + next[i][0];
        ty = y + next[i][1];

        if(tx>=0&&tx<H&&ty>=0&&ty<W&&graph[tx][ty]==ch)
            DFS(tx,ty);
    }
}

bool comp(Rank x,Rank y)
{
    if(x.r > y.r)
        return true;
    else if(x.r==y.r && x.ch<y.ch)
        return true;
    return false;
}
