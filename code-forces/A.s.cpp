#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

#define sz 1010

int arr[sz];

char s[20];

int main()
{
    int n, k, ans = 0, i, a;
    scanf("%d %d", &n, &k);
    for(i = 0; i < k; ++i)
    {
        scanf("%s", s);

        if(strcmp(s, "CLICK") == 0)
        {
            scanf("%d", &a);
            if(arr[a] == 0)
            {
                ++ans;
                arr[a] = 1;
            }
            else
            {
                --ans;
                arr[a] = 0;
            }
        }
        else
        {
            ans = 0;
            memset(arr, 0, sizeof(arr));
        }
        printf("%d\n", ans);
    }
    return 0;
}
