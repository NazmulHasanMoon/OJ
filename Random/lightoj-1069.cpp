#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,i(1);
    sf("%d",&t);
    int a,b,s;
    while(i<=t)
    {
        sf("%d %d",&a,&b);
        if(a==0)
            pf("Case %d: 0\n",i++);
        else if(a>b)
        {
            s=a*4+(a-b)*4;
            pf("Case %d: %d\n",i++,s+19);
        }
        else{
            s=b*4;
            pf("Case %d: %d\n",i++,s+19);
        }

    }
    return 0;
}
