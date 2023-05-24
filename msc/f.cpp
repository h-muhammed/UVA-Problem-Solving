#include <cstdio>
#include <cstring>

int main()
{
    char  c[10], d[10];
    int t, i,j, a, b,e,k,l,sub,len1,q;
    scanf("%d", &t);
    for(i = 1; i<= t; ++i)
    {
        l=0;
        l=0;
        k=0;
        int p=0;
        scanf("%d %d %s", &a, &b , &c);
        sub = a-b;
        if(sub == 0)
            d[l++] = sub+'0';
        while(sub>0)
        {
            e= sub%10;
            d[l++] = e+'0';
            sub/=10;

        }

        q=l-1;
        for(j = 0; j < l; ++j)
        {

            if(d[q]==c[j])
            {
                ++p;
            }

            else
            {

                if(c[j]=='?')
                    d[k++] = d[q];
                    q-=1;
            }
        }
        if(p == len1)
            printf("Case %d: Done\n",i);
        else
        {
            printf("Case %d: ",i);
            while(k>=0)
                printf("%c", d[--k]);
            printf("\n");
        }
    }
    return 0;
}
