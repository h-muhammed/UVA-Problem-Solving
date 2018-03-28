
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int p1,p2,p3,t1,t2,n,diff,a,b,ti[111],tf[111],res;
    while(scanf("%d%d%d%d%d%d",&n,&p1,&p2,&p3,&t1,&t2)==6)
    {
        res=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&ti[i],&tf[i]);
            res+=(tf[i]-ti[i])*p1;
        }
        for(int i=0; i<n-1; i++)
        {
            diff=ti[i+1]-tf[i];
            if(diff>t1)
            {
                res+=t1*p1;
                diff-=t1;
                if(diff>t2)
                {
                    res+=t2*p2;
                    diff-=t2;
                    if(diff>0)
                    res+=diff*p3;
                }
                else res+=diff*p2;
            }
            else res+=diff*p1;
        }

        printf("%d\n",res);
    }
    return 0;
}
/*
2 8 4 2 5 10
20 30
50 100
*/
