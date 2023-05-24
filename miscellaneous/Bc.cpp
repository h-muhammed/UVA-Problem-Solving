#include <algorithm>
#include <bitset>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
using namespace std;
typedef long long int i64;
typedef unsigned int u32;
typedef unsigned long long int u64;
typedef vector < int > IV;
typedef vector < IV > IVV;
#define GetFS(b) ( (b) & (-b) )
#define ClrFS(b) (b & ~GetFS(b))
#define Neg(v) memset((v), -1, sizeof(v))
#define Zero(v) memset((v), 0, sizeof(v))
#define SInf(v) memset((v), 0x7f, sizeof(v))
#define For(t,i,c) for(t::iterator i =(c).begin(); i != (c).end(); ++i)
#define RFor(t,v,c) for(t::reverse_iterator i = (c).rbegin(); i != (c).rend(); ++i)

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++ )
#define FORD( i, U, L ) for(int i=(int)U ; i>=(int)L ; i-- )
#define SQR(x) ((x)*(x))

#define INF INT_MAX

#define SQR(x) ((x)*(x))
#define PI 2*acos(0)
#define EPS 1e-7

#define MOD 1000003
#define OM 1000000

using namespace std;

int main()
{
    int n,p;
    double a, b, c, d, q, g, k, f;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        break;
        p = n/7;

         a=(p+0.5)*2;
         b=(double)(p+1)*5;
         k= a+b;
         f=((double)(p-0.5)*2)+(double)(p*5);
         if(k<=(double)n)
         {

         printf("%.1lf %.1lf %.1lf %.1lf\n",(double)n-k, (double)(p+0.5), (double)(p+0.5), (double)p+1);
         }
         else
         printf("%.1lf %.1lf %.1lf %.1lf\n",(double)n-f,  (double)(p-0.5), (double)(p-0.5), (double)p);
    }
    return 0;
}
