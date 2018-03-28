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
#include <cstring>
using namespace std;

int main()
{
 int ar[200010], i, j, n, k;
 while(scanf("%d %d", &n, &k)==2)
 {
     int sum=0;
        for(i =0; i<n; ++i)
        scanf("%d", &ar[i]);
        sort(ar, ar+n);
        int d=0;

        for(i= 0; i<2; ++i)
        {
              for(l =0; l<n; ++l)
              {


            for(j =0; j<k; ++j)

                sum+=ar[j];
                l+=k;
              }
              if(d<sum)
              d=sum;

        }
        printf("%d\n", sum);
 }
 return 0;
}
