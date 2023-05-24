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

queue <int> Q;

int main()
{
    int n, i, j, x;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        break;
        for(i=1; i<=n; ++i)
            Q.push(i);
        printf("Discarded cards:");
        while(Q.size()>1)
        {
            printf(" %d", Q.front());
            Q.pop();
            x=Q.front();
            Q.pop();
            if(!Q.empty())
                printf(",");
            Q.push(x);
        }
        printf("\nRemaining card: %d\n", Q.front());
        Q.pop();
    }
    return 0;
}
