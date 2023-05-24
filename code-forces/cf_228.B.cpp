/*==================================
 Author : Md Saddam Hossain (codemared)
 Email  : mshossaincse@gmail.com
 University : SUST
 ===================================*/
//#include <bits/stdc++.h>
//C headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
//#include <assert.h>
//#include <time.h>
//cpp headers
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <deque>
#include <list>
//#include <bitset>
using namespace std;
//typedefs
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<int> vii;
typedef vector<pii> vpii;
typedef map<int, int> mpii;
//always useful
#define gcd(a,b) __gcd(a,b)
#define clr(a) memset(a, 0, sizeof(a))
#define mem(a,b) memset(a, b, sizeof(a))
#define memsz(a,b,n) memset(a, b, n * sizeof(*a))
#define REP(i, a, n) for(int i = a; i < n; ++i)
#define REPE(i, a, n) for(int i = a; i <= n; ++i)
#define RREP(i, a, n) for(int i = a; i > n; --i)
#define RREPE(i, a, n) for(int i = a; i >= n; --i)
//io
#define sf scanf
#define pf printf
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);
//useful with graphs
#define fr first
#define sc second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ins insert
#define IT iterator
#define all(v) v.begin(), v.end()
#define ssort(v) stable_sort(v.begin(), v.end())
#define LB lower_bound
#define UB upper_bound
#define POPC __builtin_popcount
#define loop(i, x) for(__typeof((x).begin()) i=(x).begin(); i!=(x).end(); ++i)
#define rloop(i, x) for(__typeof((x).rbegin()) i=(x).rbegin(); i!=(x).rend(); ++i)
#define TEMPLATE template<typename T>

int x[]= {-1, 0,1,0};
int y[]= {0, 1, 0,-1};
int gcd(int a, int b);
char ar[110][110];
int main()
{
    int i, j, n,cnt=0,l=0;

    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            scanf(" %c", &ar[i][j]);
            if(ar[i][j]=='#')
                ++cnt;
        }
    }
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(ar[i][j]=='#')
                gcd(i,j);
        }
    }

    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(ar[i][j]=='#')
            {

                printf("NO\n");
                ++l;
                break;
            }

        }
        if(l!=0)
            break;
    }
    if(l==0)
        printf("YES\n");


    return 0;
}

int gcd(int a, int b)
{
    int i, c, d, k=0;
    for(i=0; i<4; ++i)
    {
        c=a+x[i];
        d=b+y[i];
        if(ar[c][d]=='#')
            ++k;
    }
    if(k==4)
    {
        ar[a][b]='.';
        for(i=0; i<4; ++i)
        {
            c=a+x[i];
            d=b+y[i];
            ar[c][d]='.';

        }
    }

}

