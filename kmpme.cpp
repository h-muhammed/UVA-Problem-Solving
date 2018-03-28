#include <stdio.h>
#include <iostream>
#include <string.h>
char text[100000], pettern[100000];
void kmp(void);
int main()
{
    while(scanf("%s %s", text, pettern)==2)
    {
        kmp();
    }
    return 0;
}
void kmp(void)
{
    int i, len1=strlen(text), len2=strlen(pettern), p=0, b=0, c=0;
     printf("%d\n", c);
    for(i=0; i<len1; ++i)
    {
           printf("%d %d\n", strlen(text), i);
        while(text[b]==pettern[p]&&p<len2)
        {
            p++;
            b++;
            if(p==len2-1)
            {
                c++;
                p=0;
            }
        }
        p=0;
        i=b;
    }
    printf("%d\n", c);
}
