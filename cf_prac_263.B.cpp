
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
    int t=0, q=0,d=0,k=0,x,i,sum=0,c=0,ar[1004];

    scanf("%d", &x);
    for(i=0; i <x; ++i)
    {
        scanf("%d", &ar[i]);
        if(k==0 && ar[i]==1)
        {
            k++;
            d=i;
        }
    }
    for(i=x-1; i>=0; --i)
    {
        if(ar[i]==1)
        {
        c=i;
        break;
        }
    }
    for(i=d+1; i<c; ++i)
    {
        if(ar[i]==0&&q==0)
        {
            ar[i]=1;
            ++q;
        }
        else if(ar[i]==1)
        {
            q=0;
        }
    }
    for(i=0; i<x; ++i)
    {
        sum+=ar[i];
    }
    printf("\n");
    printf("%d\n", sum);
    return 0;
}



