#include <bits/stdc++.h>
#include <string.h>

int main()
{
    int i, j, k, a, b, c, temp, tag=0, ar[1000];
    char arr[100][100][100], ah[100][100][100];
    scanf("%d %d", &a, &b);
    for(i = 0; i < b; ++i)
        scanf("%s", arr[i]);
    for(i=0; i<b; ++i)
    {
        for(k=0; k<a-1; ++k)
        {
            for(j = k+1; j < a-1; ++j)
            {
                if(arr[i][k][k] > arr[i][k][j])
                    ++tag;
            }
        }
        ar[i] = tag;
        printf("%d\n", tag);
            tag = 0;
    }
    for(i = 0; i < b - 1; ++i)
    {
        for(j = i + 1; j < b; ++j)
        {
            if(ar[i] < ar[j])
            {
                strcpy(ah[i][i], arr[j][j]);
                strcpy(arr[i][i], arr[j][j]);
                strcpy(arr[j][j], ah[i][i]);
            }
        }
    }
    for(i=0; i<b; ++i)
    {
        for(j=0; j<b; ++j)


        printf("%s\n", arr[i]);
    }
    return 0;
}
/*
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT*/
