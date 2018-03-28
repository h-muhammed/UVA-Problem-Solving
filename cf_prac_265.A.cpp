
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
    int t, q,x,i;
    char ar[104];
    scanf("%d", &x);
    scanf("%s", &ar);
    int d=0;
    if(ar[0]=='0' && x==1)
    {
        printf("1\n");
        return 0;
    }
    else if(ar[0]=='1')
    {
        ++d;
        for(i=1; i<x; ++i)
            if(ar[i]=='1')
            {
                q=i;
                ++d;
            }
            else
                break;
    }
    if(x==1)
        printf("1\n");
    else if(q==x-1)
        printf("%d\n", d);
    else
        printf("%d\n", d+1);

    return 0;
}


