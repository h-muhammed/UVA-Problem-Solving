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

using namespace std;

int main()
{
    int n, m, i, j,k;
    char ar[106];
    scanf("%d", &n) ;
    for(i = 0; i< n; ++i)
    {
        int f=0,d=0, a=0;
        scanf("%d", &m);
            scanf("%s", ar);
        for(k =0; k<m; ++k)
        {
            if(ar[k]=='Y')
                ++f;
            else if(ar[k] == 'I')
                ++d;
        }
        if(d != 0)
            printf("INDIAN\n");
        else if(f != 0)
            printf("NOT INDIAN\n");
        else
            printf("NOT SURE\n");
    }
    return 0;
}
