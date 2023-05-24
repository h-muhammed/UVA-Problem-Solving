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
    int n, m, i, j, k, ab[110], ag[110];
    int cnt=0;
    scanf("%d", &n);
    for(i =0; i<n; ++i)
        scanf("%d", &ab[i]);
    sort(ab, ab+n);
    scanf("%d", &m);
    for(j=0; j<m; ++j)
        scanf("%d", &ag[j]);
    sort(ag, ag+m);
    for(i=0; i<n; ++i)
    {
        for(j=0; j<m; ++j)
        {
            if(ab[i]==ag[j])
            {
                ++cnt;
                ag[j]=-1;
                break;
            }
            else if(ab[i]+1==ag[j])
            {
                ++cnt;
                ag[j]=-1;
                break;
            }
            else if(ab[i]-1==ag[j])
            {
                ++cnt;
                ag[j]=-1;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
