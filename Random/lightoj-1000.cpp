#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        int a,b;
        sf("%d %d",&a,&b);
        pf("Case %d: %d\n",i++,a+b);
    }
    return 0;
}

