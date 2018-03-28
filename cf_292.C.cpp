#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<cstdlib>

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
using namespace std;

#define ll long long

int flagboy[105];
int flaggir[105];

int main()
{
    int t, i, j=0, ln, d=0,l=0, ar1[101];
    char ar[101], arr[101];
    scanf("%s %s", &ar, &arr);
    ln=strlen(ar);
    for(i=0; i<ln; ++i)
    {
        for(j=i ; j<ln; ++j)
        if(arr[j]-ar[i]>1)
        {
            ++d;
        }
        else
        {
            printf("No such string\n");
            ++l;
            break;
        }
        if(l!=0)
        break;
    }
    if(l==0)
    {
        for(i=0; i<ln; ++i)
        {
            printf("%c", ar[i]+1);
        }
        printf("\n");
    }

    return 0;
}
