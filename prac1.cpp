//C headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
#include <assert.h>
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
//#include <bits/stdc++.h>
//#include <bitset>
using namespace std;
//typedefs
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef char C;
typedef string S;
typedef unsigned long long UNL;

//some constants
const double PI = 2.0 * acos(0.0);
//always useful
#define gcd(a,b) __gcd(a,b)
#define clr(a) memset(a, 0, sizeof(a))
#define mem(a,b) memset(a, b, sizeof(a))
#define LOG(x,BASE) (log10(x)/log10(BASE))
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define rrep(i, a, n) for(int i = a; i > n; --i)
#define repe(i, a, n) for(int i = a; i <= n; ++i)
#define rrepe(i, a, n) for(int i = a; i >= n; --i)
//useful with graphs
#define fr first
#define sc second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define IT iterator
#define all(v) v.begin(), v.end()
#define ssort(v) stable_sort(v.begin(), v.end())
#define LB(v, x) lower_bound(v.begin(), v.end(), x)
#define UB(v, x) upper_bound(v.begin(), v.end(), x)
#define loop(i, x) for(__typeof((x).begin()) i=(x.begin()); i!=(x).end(); ++i)
#define rloop(i, x) for(__typeof((x).rbegin()) i=(x.rbegin()); i!=(x).rend(); ++i)
#define sz(a) (int)a.size()
#define sf scanf
#define pf printf
#define NL pf("\n")
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d", &a,&b, &c)
#define sf4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define sf5(a,b,c,d,e) scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)
#define sf6(a,b,c,d,e,f) scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)
#define __ freopen("in.in", "r", stdin)
#define ___ freopen("out.out", "w", stdout)
#define oo 1000000000
/*--------------------------------------------------------------------------------------------------*/


const double EPS = 1e-9;
//ll Pow(ll B,ll P){  ll R=1; while(P>0)  {if(P%2==1) R=(R*B);P/=2;B=(B*B);}return R;}

//ll extGcd(ll a, ll b, ll& x, ll& y){if (b == 0){x = 1;y = 0;return a;}else{ll g = extGcd(b, a % b, y, x);y -= a / b * x;return g;}}
//ll modInv(ll a, ll m){ll x, y; extGcd(a, m, x, y); x %= m; while (x < 0){x += m;} return x;}
//ll bigmod(ll a,ll b,ll m){if(b == 0) return 1%m;ll x = bigmod(a,b/2,m);x = (x * x) % m;if(b % 2 == 1) x = (x * a) % m;return x;}
//ll BigMod(ll B,ll P,ll M){ ll R=1%M; while(P>0) {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} ret urn R;} /// (B^P)%M

//template <class T> inline T gcd(T a, T b){if(b == 0) return a;return gcd(b,a%b);}
//template <class T> inline T lcm(T a, T b){return (a/gcd(a,b)) * b;}

//int x[] = {0,0,-1,1};//4-way
//int y[] = {-1,1,0,0};//4-way
//ll x[] = {-1,-1,-1,0,0,1,1,1};//8-way
//ll y[] = {-1,0,1,-1,1,-1,0,1};//8-way
//int dx[] = {+1,+1,+2,+2,-1,-1,-2,-2}; //knight moves
//int dy[] = {+2,-2,+1,-1,+2,-2,+1,-1}; // knight moves
//inline long FastMax(long x, long y) { return (((y-x)>>(32-1))&(x^y))^y; }
//inline long FastMin(long x, long y) { return (((y-x)>>(32-1))&(x^y))^x; }
//inline long FastMin(long x, long y) { return (((y-x)>>(32-1))&(x^y))^x; }

//#include<conio.h>
//#define wait getch()

using namespace std;

int main()
{
    int i, j, k;
    char aar[101];
    scanf("%s", &aar);
    k= strlen(aar);
    int a=0, b=0, d=0,cnt = 0;
    for(i=0; i<k; ++i)
    {
        if(aar[i]=='n')
            ++cnt;
        else if(aar[i]=='i')
            ++a;
        else if(aar[i]=='e')
            ++b;
        else if(aar[i]=='t')
            ++d;

    }

    if(a<=d && cnt<=b)
    {
        cnt=cnt/3;
        if(a==cnt)
            printf("%d\n", a);
        else if(a>cnt)
            printf("%d\n", cnt);
        else
            printf("%d\n", a);
    }
    else if(a<=d && cnt>b)
    {
        b=b/3;
       if(a==b)
            printf("%d\n", a);
        else if(a>b)
            printf("%d\n", b);
        else
            printf("%d\n", a);
    }
    else if(a>=d && cnt<b)
    {
        cnt=cnt/3;
        if(d==cnt)
            printf("%d\n", d);
        else if(a>cnt)
            printf("%d\n", cnt);
        else
            printf("%d\n", d);
    }
    else
    {
        b=b/3;
        if(d==b)
            printf("%d\n", b);
        else if(a>d)
            printf("%d\n", d);
        else
            printf("%d\n", b);
    }
    return 0;
}
