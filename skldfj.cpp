#include <sstream>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <complex>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <list>
#include <string.h>
#include <assert.h>
#include <time.h>

using namespace std;

#define SZ(x) ((int)x.size())
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define clrall(name,val) memset(name,(val),sizeof(name));
#define EPS 10e-9
#define ll long long
#define ull long long unsigned
#define SF scanf
#define PF printf
#define psb(b) push_back((b))
#define ppb() pop_back()
#define oo (1<<28)
#define mp make_pair
#define fs first
#define sc second
#define rep(var,s,n,it) for(var=(s);var<(n);(var)+=it)
#define rev(var,s,n,it) for(var=(n-1);var>(s-1);(var)-=it)
#define Read freopen("in.txt","r",stdin)
#define Write freopen("out.txt","w",stdout)
#define __ std::ios_base::sync_with_stdio (false)

#define casePrint PF("Case #%d: ",++cas);

int main()
{
    #ifdef rumman
//    Read;
//    Write;
    #endif // rumman
    int x;
    int a,b,c;
    while(SF("%d",&x)==1 && x)
    {
        x*=2;
        int g=x,k=-1,l=-1;
        int p=(x-(x%7))/7;
        if(g>(x%7))
        {
            g=x%7;
            k=p;
            l=p;
        }
        if(x-2>=0)
        {
            p=((x-2)-(x-2)%7)/7;
            if(g>(x-2)%7)
            {
                g=(x-2)%7;
                k=p+1;
                l=p;
            }
        }
        if(x-5>=0)
        {
            p=((x-5)-(x-5)%7)/7;
            if(g>(x-5)%7)
            {
                g=(x-5)%7;
                k=p;
                l=p+1;
            }
        }

        PF("%0.1lf %0.1lf %0.1lf %0.1lf\n",(g/2.0),(k/2.0),(k/2.0),(l/2.0));

    }
    return 0;
}

