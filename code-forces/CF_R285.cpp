#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

int main()
{
    int a, b, c, d;
    while(scanf("%d %d %d %d", &a, &b, &c,&d)==4)
    {
        a=max(((3*a)/10),a-(a/250)*c);
        b =max(((3*b)/10),b-b/250*d);
        if(a==b)
            printf("Tie\n");
        else if(a>b)
            printf("Misha\n");
        else
            printf("Vasya\n");
    }

    return 0;
}
