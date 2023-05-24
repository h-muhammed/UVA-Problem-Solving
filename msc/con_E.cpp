#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

int gcd(int a, int b);

int main()
{
    int t, i, j, n,k,cnt, res;
    scanf("%d", &t);
    for( i=1; i<=t; ++i)
    {
        cnt=0;
        scanf("%d", &n);
        for(j=2; j<n; j+=2)
        {
            for(k=j+2; k<=n; k+=2)
            {
            res=gcd(j, k);
            if(cnt < res)
            cnt = res;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return gcd(b, a%b);
}
