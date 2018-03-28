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
    int i, j, k, n, ar[110], ap[110];
    while(s("%d", &n)==1)
    {
        for(i=0; i<n; ++i)
            s("%d", &ar[i]);
        k=1;
        int l=0;
        int m=0;
        int p=1001;
        for(i=1; i<n-1; ++i)
        {

                for(j=1; j<n; ++j)
                {
                    if(i==k)
                    {
                        int a=ar[j+1]-ar[j-1];
                        if(m<a)
                            m=a;
                            printf("%d\n", m);
                    }
                }
                ap[l++]=m;
                ++k;

        }
        for(i=0; i<l; ++i)
        {
            if(p>ap[i])
                p=ap[i];
                //printf("%d\n", p);
        }
        printf("%d\n", p);
    }
    return 0;
}
