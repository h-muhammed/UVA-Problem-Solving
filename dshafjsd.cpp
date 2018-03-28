/*==================================
 Author : Md Saddam Hossain (codemared)
 Email  : mshossaincse@gmail.com
 University : SUST
 ===================================*/
//#include <bits/stdc++.h>
//C headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
//#include <assert.h>
//#include <time.h>
//cpp headers
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
int main()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    if(n>m)printf("%d\n",n-m);
    if(m>n)
    {
        while(m>n)
        {
            count++;
            if(m%2==0)
            {
                m = m/2;
            }
            else if(m%2!=0)
            {
                m = m+1;
            }
        }
        printf("%d\n",count+(n-m));
    }
    return 0;
}
