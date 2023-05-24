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
    long long i, j, l, r;
    while(scanf("%I64d %I64d", &l, &r)==2)
    {

        if(r%2==0 && r-l>=2)
        {
            printf("%I64d %I64d %I64d\n", l, l+1, l+2);
        }
        else if(r%2!=0 && r-l>2)
            printf("%I64d %I64d %I64d\n", l+1, l+2, l+3);
        else
            printf("-1\n");
    }
    return 0;
}
