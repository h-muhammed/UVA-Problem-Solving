#include <cstdio>

#include <cstring>
int main()
{
    char a[210], b[210];
    int n, i, j, k=0;
    scanf("%d",  &n);
    for(i=1; i<=n ; ++i)
    {
        scanf("%s %s", &a, &b);
        len1 = strlen(a);
        len2 = strlen(b);
        if(k<len1)
        k=len1;
        if(k<len2)
        k=len2;
        for(j = 0; j<k; ++j)
        {
            p=a[j]-'0';
            q=b[j]-'0';
            d=p+q;

            a[j]='0'
        }
    }
}
