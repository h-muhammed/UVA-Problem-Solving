#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

int main()
{
    double a,b,c,d,e,f,g,h,S1, S2;
    int i,j,t;
    scanf("%d", &t);
    for(i = 1; i<=t; ++i)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        e=(c*d)/(a-c);
        f=(c*b)/(a-c);
        g=d+e;
        h=b+f;
        S1 = 0.5*(g+a+h);
        double Tarea = sqrt(S1*(S1-g)*(S1-h)*(S1-a));
        S2 = 0.5*(e+f+c);
        double tarea = sqrt(S2*(S2-e)*(S2-c)*(S2-f));
        double TTarea = Tarea - tarea;
        if(TTarea < 0)
        TTarea *=-1;
        printf("Case %d: %.10lf\n", i, TTarea);
    }
    return 0;
}
