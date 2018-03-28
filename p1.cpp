/*==================================
 Author : Md Saddam Hossain (codemared)
 Email  : mshossaincse@gmail.com
 University : SUST
 ===================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <deque>
#include <list>
using namespace std;



int main()
{
    int i, j, n;
    double sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; ++i)
    {
        sum+=n/i;
    }
    printf("%lf", sum);

    return 0;
}
