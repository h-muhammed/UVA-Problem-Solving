#include <cstdio>

int main()
{
    int n , k, ar[2000],i, f, j,d=0,p;
    while(scanf("%d %d", &n, &k)==2)
    {
        int sum =0;
        for(i = 0; i<n; ++i)
        {
            scanf("%d", &ar[i]);
        }
        for(i =0; i<n; i+=k)
        {
            for(j = 0; j <k; ++j)
            {
                d=0;
                for(f= 0; f<n; ++f)
                {
                   if(d<ar[f])
                   {
                        d = ar[f];
                        p=f;
                   }
                }
                ar[p]=-1;
                 if(j ==0)
             sum+=2*d-2;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
