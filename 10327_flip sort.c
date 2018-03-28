#include <stdio.h>
int main()
{
    int n, i, j, k, temp, tag=0, ar[1000];
    while(scanf("%d", &n)==1)
    {
        for(i=0; i<n; ++i)
           scanf("%d", &ar[i]);
           for(i=0; i<n; ++i)
           {
               for(j=i+1; j<n; ++j)
               {
                   if(ar[i]>ar[j])
                   {
                       ++tag;

                   }
               }
           }


           printf("Minimum exchange operations : %d\n", tag);
           tag=0;
    }
    return 0;
}
