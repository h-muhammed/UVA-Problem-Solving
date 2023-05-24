#include <stdio.h>
int main()

{

    int n, l, ar[10000], i, k, temp = 0,j;
    scanf("%d", &n);
    for(k = 0; k < n; k++)
    {
        temp = 0;
        scanf("%d", &l);
        for(i = 0; i <l; i++)

            scanf("%d", &ar[i]);
        for(i = 0; i < l; i++)
        {
            for(j = i + 1; j < l; j++)
            {
                if(ar[j] < ar[i])
                ++temp;
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", temp);
    }
    return 0;
}
