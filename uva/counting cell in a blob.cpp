#include <cstdio>
#include <cstring>
#include <map>
#include <queue>
#include <iostream>
using namespace std;
int o[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int q[] = {-1, 0, 1, -1, 1, -1, 0, 1};

char matrix[30][30];
int p, j, l, z;
int cell(void);
queue <int> Qrow;
queue <int> Qclum;

int main()
{
    int i, k, t, x=0;
    scanf("%d\n", &t);
    for(i=0; i<t; ++i)
    {
        if(i!=0)
            printf("\n");
        l = 0;
        x = 0;
        while(gets(matrix[l]))
        {
            if(matrix[l][0] == '\0')
            {
                break;
            }
            ++l;
        }
        if(l > 0)
            z = strlen(matrix[l - 1]);
        for(p=0; p<l; ++p)
        {
            for(j=0; j<z; ++j)
            {
                if(matrix[p][j]=='1')
                {

                    k=cell();
                    if(x<k)
                        x=k;
                }
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
int cell(void)
{
    while(!Qrow.empty())
    {
        Qrow.pop();
        Qclum.pop();
    }
    Qrow.push(p);
    Qclum.push(j);
    matrix[p][j]= '0';
    int i, x, y, a, b, h=0;
    while(!Qrow.empty())
    {
        ++h;
        a=Qrow.front();
        b=Qclum.front();
        Qrow.pop();
        Qclum.pop();
        for(i=0; i<8; ++i)
        {
            x= a + o[i];
            y= b + q[i];
            if(x>-1 && x < l && y < z && y>-1)
            {
                if(matrix[x][y]=='1')
                {
                    Qrow.push(x);
                    Qclum.push(y);
                    matrix[x][y]= '0';
                }
            }
        }
    }
    return h;
}


