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

long long ar[1000010], ap[500000], aq[500000], prime[800010];
int main()
{
    long long n, i, j, cnt=0, l, a, b, k , d, c,  mal, sum;
    prime[0] = 2;
    for(i = 3; i<= 1000010; i+=2)
    {
        if(ar[i] == 0)
        {
            prime[++cnt] = i;
            j = i + i;
            for(j = i * i; j <= 1000010; j += i)
                ar[j] = 1;
        }
    }

    while(scanf("%lld", &n)==1)
    {
        char res[10000],h;
        sum = 1, k = 0,l = 0,c = 0;
        res[0] = '1';
        for(i = 0; prime[i] <= n/2; ++i)
        {
            aq[prime[i]] = ap[prime[i]];
            while(n > 0)
            {
                if(n % prime[i] == 0)
                {
                    ++ap[prime[i]];
                    n /= prime[i];
                }
                else
                    break;

            }
            if(ap[prime[i]] < aq[prime[i]])
                ap[prime[i]] = aq[prime[i]];
        }
        for(i = 0; prime[i] <= n/2; ++i)
        {
            mal = prime[i] * ap[prime[i]];
            while(mal > 0)
            {
                int a = l;
                d = mal % 10;
                mal /= 10;
                for(j = 0; j <= a; ++j)
                {

                    h = ('0' + res[j] * d);
                    h += k;
                    if(h >= 10)
                        res[l++] = (h % 10) -  '0';
                    k = h/10;

                }
                int b = l;
                while(--b)
                {
                    res[c++] = res[b];
                }
            }

        }
        for(i = 0; i < l; ++i)
        {
            if(res[i] == '0')
                break;
            else
                printf("%c", res[i]);
        }
        printf("\n");
    }
    return 0;
}
