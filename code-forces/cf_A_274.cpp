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
    int a,b,c, ar[5], i, j;
    while(scanf("%d %d %d", &a,&b, &c)==3)
    {
        int d=0;
        ar[0]=a+b*c;
        ar[1]= a*(b+c);
        ar[2] =a*b*c;
        ar[3]= (a+b)*c;
        ar[4]=a+b+c;
        for(i=0; i<5; ++i)
            if(d<ar[i])
                d=ar[i];
        printf("%d\n", d);
    }
    return 0;
}
