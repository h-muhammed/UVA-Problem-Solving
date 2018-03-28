#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>


using namespace std;

#define s scanf
#define p printf

int main()
{
    int i,k, j, n, a,b;
    while(s("%d", &n)==1)
    {
        k=0;
        if(n<0)
        {
            b = 8-n;
            p("%d\n", b);
        }
        else
        {
            for(i =1; i<=10; ++i)
            {
                a=n+i;
                while(a>0)
                {
                    j=a%10;
                    a/=10;
                    if(j==8)
                    {
                        ++k;
                    p("%d\n", i);
                    break;
                    }
                }
                if(k==1)
                break;
            }
        }
    }
    return 0;
}

