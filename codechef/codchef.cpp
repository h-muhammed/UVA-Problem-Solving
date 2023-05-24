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
    int ar[1000], n, i, j;
    char ap[100010];
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
        memset(ar,0,sizeof(ar));
        int cnt=0;
        scanf("%s", &ap);
        int len =strlen(ap);
        for(j=0; j<len; ++j)
        {
            if(ar[ap[j]]!=1)
            {
            ar[ap[j]]=1;
            ++cnt;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
