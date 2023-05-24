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
//variables and functions

/*------------------------------------------------------------------------------------*/
int main()
{
    int i, j,b, n,d,t,cnt,l,k,h;
    char ch,ar[510];
    scanf("%d", &t);
    for(i=1; i<=t; ++i)
    {
        int cnt =0;
        int l=0,b=0;
        scanf("%d", &n);
        getchar();
        for(j=0; j<n; ++j)
        {
            scanf(" %c", &ch);
            if(ch=='L'&&cnt==0)
                ++cnt;
            ar[j] = ch;
        }
        for(j=0; j<n-2; ++j)
        {
            if((ar[j]=='D' || ar[j]=='L') &&(ar[j+1]=='L'||ar[j+1]=='D') && (ar[j+2]=='L'||ar[j+2]=='D'))
            {
                b=j+2;
                ++l;
                break;
            }

        }
        if(l==0)
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        else if(b==0)
            printf("Case %d: %d\n", i,n);
        else
            printf("Case %d: %d\n", i, b+1);
    }
    return 0;
}
