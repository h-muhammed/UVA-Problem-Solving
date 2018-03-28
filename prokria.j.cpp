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

stack<int>Q[10005];

int main()
{
    char s[10];
    int i, j, k, n, t,p,x,q,y, l,w[10005], m;
    scanf("%d", &t);
    for( p=1; p<=t; ++p)
    {
        l=0;
        scanf("%d %d", &n, &q);
        for(int a=0; a<q; ++a)
        {

            scanf("%s", &s);
            if(strcmp(s, "push")==0)
            {
                scanf("%d %d", &i, &x);
                Q[i].push(x);
            }
            else if(strcmp(s, "pop")==0)
            {
                scanf("%d", &i);
                if(!Q[i].empty())
                    Q[i].pop();
            }
            else if(strcmp(s, "put")==0)
            {
                int ar1[30005], u=0;;
                scanf("%d %d", &i, &j);
                int y = Q[j].size();
                for(int h=0; h<y; ++h)
                {
                    ar1[u++]= Q[j].top();
                    Q[j].pop();
                }
                m=u-1;
                for(int h=0; h<u; ++h)
                    Q[i].push(ar1[m--]);

            }
            else if(strcmp(s, "top")==0)
            {

                scanf("%d", &i);
                if(!Q[i].empty())
                    w[l++]=Q[i].top();
                else
                    w[l++]=-1;
            }
        }
        printf("Case %d:\n", p);
        for(int h=0; h<l; ++h)
        {
            if(w[h]==-1)
                printf("Empty!\n");
            else
                printf("%d\n", w[h]);
        }
    }
    return 0;
}

/*
1
3 18
push 1 1
push 2 2
push 3 3
push 3 4
top 1
top 2
top 3
put 1 3
pop 2
top 1
top 2
top 3
pop 1
top 1
pop 1
top 1
pop 1
top 1
*/
