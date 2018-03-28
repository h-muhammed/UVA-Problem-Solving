#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <utility>
#include <vector>
vector<int>vec[310];

int main()
{
    int n, i, j, m, ar[400];
    char ap[400][400];
    while(scanf("%d", &n)==1)
    {
        for(i =0; i<n; ++i)
            scanf("%d", &ar[i]);

        for(i=0; i<n; ++i)
            scanf("%s", &ap[i]);
        for(i =0 ; i<n-1; ++i)
        {

            for(j=0; j<n; ++j)
                if((ap[i][j]=='1'&&ap[j][i]=='1'))
                {
                    vec[ar[i]].push_back(j);
                    vec[ar[j]].push_back(i);
                }
            printf("\n");
        }
        for(i=0; i<n; ++i)
        {
            printf("%d", ar[i]);
            if(i<n)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
