#include <cstdio>

int main()
{
    int i, j, ar[3], t, a,d=-1;
    scanf("%d", &t);
    for(i = 1; i<=t; ++i)
    {
        d=-1;
        int sum=0;
        for(j = 0; j < 3; ++j)
        {
            scanf("%d", &ar[j]);
            if(d < ar[j])
                d=ar[j];
        }
        for(j = 0; j<3; ++j)
        {
            if(d !=ar[j])
                sum+= ar[j]*ar[j];
        }
        if(d*d==sum)
        printf("Case %d: yes\n", i);
        else
        printf("Case %d: no\n", i);
    }
    return 0;
}
