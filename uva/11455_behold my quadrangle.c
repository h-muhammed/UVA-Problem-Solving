#include <stdio.h>
int main()
{
    int t, i, j, k, temp, ar[10];
    scanf("%d", &t);
    for(i=0; i<t; ++i)
    {
        for(j=0; j<4; ++j)
        scanf("%d", &ar[j]);
        for(k=0; k<3; ++k)
        {
            for(j=k+1; j<4; ++j)
            {
                if(ar[k]<ar[j])
                {
                    temp=ar[k];
                    ar[k]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        if(ar[0]==ar[1]&&ar[0]==ar[2]&&ar[0]==ar[3])
            printf("square\n");
        else if(ar[0]==ar[1]&&ar[2]==ar[3])
            printf("rectangle\n");
        else if(ar[0]<ar[1]+ar[2]+ar[3])
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
