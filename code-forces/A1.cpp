#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int i,j,t, n, m, ar[11];
    scanf("%d", &t);
    for(i=0; i<t; ++i)
    {
        long long mal = 1;
        int sum = 0,l = 1;
        scanf("%d", &n);
        int d=n;
        while(n>0)
        {
            ar[l++] = n%10;
            n/=10;
        }
        m=l-1;
        for(j=1; j<l; ++j)
        {
            while(m>0)
            {
                mal *= ar[j];
                --m;
            }
            sum +=mal;
            mal=1;
            m=l-1;
        }
        if(sum == d)
        printf("Armstrong\n");
        else
        printf("Not Armstrong\n");
    }
    return 0;
}
