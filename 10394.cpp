#include<iostream>
#include<stdio.h>
#define sz 40
using namespace std;
void f(int n);
void twp(void);
typedef struct
{
    int r1,r2,c;
} data;

data r[100000];
int marked[sz],a[sz],p;
int main()
{
    int i,j,s,n=sz,c;
    f(n);
    twp();
    while(scanf("%d",&s)!=EOF)
    {
        printf("(%d, %d)\n",r[s].r1,r[s].r2);

    }
    return 0;
}
void f(int n)
{

    int i,j;
    i=2;
    printf("%d\n",a[0]);
    a[p++]=i;
    printf("%d %d\n",p,a[0]);
    for(j=i*i; j<=sz; j+=i)
    {
        marked[j]=1;
        printf("%d %d\n",p,a[0]);
    }
    printf("%d %d\n",p,a[0]);
    for(i=3; i<=n; i+=2)
    {
        if(marked[i]==0)
        {
            a[p++]=i;
            for(j=i*i; j<=n; j+=i+i)
                marked[j]=1;
        }
    }
    for(i=0; i<p; i++)
        printf("%d ",a[i]);

}

void twp(void)
{
    int j,i=1;
    for(j=0; j<p; j++)
    {
        if(a[j+1]-a[j]==2)
        {
            r[i].r1=a[j];
            r[i].r2=a[j+1];
            i++;
        }
    }
}
