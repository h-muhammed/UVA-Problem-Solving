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
#define s scanf

int main()
{
    long long m,b,p,i,j,res;
    while(s("%lld %lld %lld", &b, &p, &m)==3)
    {
        res = 1;
        for(i=1; i<=p; ++i)
        {
            res = ((res%m)*(b%m))%m;
        }
        printf("%lld\n", res);
    }
    return 0;
}
