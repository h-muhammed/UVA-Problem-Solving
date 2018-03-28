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
        long long i, j, n, m, cnt, d, sum;
        while(scanf("%lld %lld", &m, &n)==2)
        {
            sum = 0;
            cnt=0;
            a = min(m,n);
            b = max(m,n);
            for(i =m ; i<=n; i++)
            {
                d=i;
                while(d>0)
                {
                    ++cnt;
                    if(d==1)
                    break;
                    if(d%2!=0)
                    d=(3*d)+1;
                    else
                    d/=2;

                }
            if(sum < cnt)
                sum = cnt;
                cnt=0;
            }
            printf("%lld %lld %lld\n", m, n, sum);
        }
    return 0;
}
