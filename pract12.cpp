#include<iostream>
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

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long
#define MX 100010
#define MOD 1000000007

int arr[MX];
main()
{
    int t,kk=1,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        arr[0]=0;
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        int mx=-100000000;
        for(int i=1;i<=n;i++)
            if(arr[i]-arr[i-1]>mx)
                mx=arr[i]-arr[i-1];

        int res=mx;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]-arr[i-1]>mx)
            {
                res++;
                break;
            }
            if((arr[i]-arr[i-1])==mx)
                mx--;
        }
       cout<<"Case "<<kk++<<": "<<res<<endl;
    }
}
