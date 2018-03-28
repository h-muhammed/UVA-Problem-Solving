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

int main()
{
    int ar[200020], sum, n, x, y, i, j;
    while(scanf("%d %d %d", &n,&x,&y)==3)
    {
        int p=2*n;
        sum=0;
        for(i=0;i<n+n; ++i)
        scanf("%d", &ar[i]);
        sort(ar, ar+(n+n));
        for(i=0; i<n;++i)
        sum += ar[--p];
        printf("%d\n", sum);
    }
    return 0;
}
