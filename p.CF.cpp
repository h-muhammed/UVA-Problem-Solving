#include<iostream>
#include<cstdio>
#include<list>
#include<string.h>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

int main()
{
    int i,j,k,l,d,m,n ,len;
    char ar[15], ar1[15], ar2[15], cnt=0;
    cin>>ar;
    len = strlen(ar);
    for(i=0; i<len+1; ++i)
    {
        for(j=0; j<len+1; ++j)
        {
            ar1[j] = ar[i];
            for(k=0; k<len+1; ++k)
            {
                if(k>=j)
                    ar1[k+1] = ar[k];
                else
                    ar1[k] = ar[k];
            }
            d=len;
            for(l=0; l<len+1; ++l)
                ar2[l] = ar1[d--];
            ar1[len+1] = '\0';
            ar2[len+1] = '\0';
            if(strcmp(ar1, ar2)==0)
            {
                ++cnt;
                break;
            }
        }
        if(cnt != 0)
            break;
    }
    if(cnt!=0)
        printf("%s\n", ar2);
    else
        printf("NA\n");

    return 0;
}
