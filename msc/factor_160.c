#include <stdio.h>
int arr[100];
int main()
{
    int i, j, k, n, x, y, z, p, prime[50], cnt=0;
    while(scanf("%d", &n)==1)
    {
        prime[cnt++] = 2;
        for(i = 3; i < 101; i += 2)
        {
            if(arr[i] == 0)
            {
                prime[cnt++] = i;
                k = i + i;
                for(j = i * i; j < 101; j += k)
                {
                    arr[j] = 1;
                }
            }
        }

    }
    return 0;
}
