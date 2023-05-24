#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

int main()
{
    double a, b, c,r, res;
    int i,t;
    scanf("%d", &t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &r);
        res = sqrt(r/(r+1))*a;
        printf("Case %d: %lf\n", i , res);
    }
    return 0;
}
