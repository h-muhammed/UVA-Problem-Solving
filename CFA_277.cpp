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
    int i, j, k, n, m,p,ar[3010],arr[3000][2],q;
    while(scanf("%d", &n)==1)
    {
        int cnt=0;
        for(i = 0; i<n; ++i)
            scanf("%d", &ar[i]);
        for(i=0; i<n-1; ++i)
        {
            int s=ar[i];
            for(j=i+1; j<n; ++j)
            {
                //int s=ar[j];
                if(s<ar[j])
                {
                    p=j;
                }
            }
            q=p;
            while(--q)
            {
                if(ar[q]>ar[q+1])
                {
                    ++cnt;
                    arr[cnt][0] = i;
                    arr[cnt][1] = p;
                    int o = ar[p];
                    ar[p]=ar[i];
                    ar[i] = o;
                    break;
                }
            }
        }
        printf("%d\n", cnt);
        for(k = 0; k<cnt; ++k)
            printf("%d %d\n", arr[cnt][0], arr[cnt][1]);
    }
    return 0;
}
