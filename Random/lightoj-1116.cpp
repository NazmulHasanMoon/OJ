#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    int t,i(1);
    ll n,x,w;
    sf("%d",&t);
    bool tt;
    while(i<=t)
    {
        sf("%lld",&n);
        w=n;
        tt=false;
        x=1;
        while(n%2==0)
        {
            x*=2;
            n/=2;
            tt=true;
        }
        if(w-x!=0&&tt)
            pf("Case %d: %lld %lld\n",i++,w/x,x);
        else
            pf("Case %d: Impossible\n",i++);

    }
    return 0;
}
