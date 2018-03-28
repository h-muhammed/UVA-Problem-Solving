
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

int ar[30],arr[30];

int main()
{
    long long int t, n=0, q,x,i;
    scanf("%I64d", &x);

    while(x>0)
    {

        if(9-(x%10)<=x%10)
            ar[n++]=9-(x%10);
        else
            ar[n++]=x%10;
        x/=10;
    }
    int d=n-1;
    for(i=0; i<n; ++i)
        arr[i]=ar[d--];
    if(arr[0]==0)
        arr[0]=9;
    for(i=0; i<n; ++i)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

