#include <stdio.h>
#include <iostream>
#include <sstream>
#include <math.h>
#include <limits.h>
#include <limits>
#include <string.h>
#include <string>
#include <algorithm>
#include <stack>
#include <set>
#include <ctime>
#include <queue>
#include <vector>
#include <map>
#include <assert.h>
#include <utility>
#include <math.h>


int main()
{
    int t, n, i;
    scanf("%d", &t);
    for(i = 1; i<=t; ++i)
    {
        scanf("%d", &n);

            printf("%d\n", (n*(n+1)/2)+n);
    }
    return 0;
}
