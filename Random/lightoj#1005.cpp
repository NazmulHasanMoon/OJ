#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define sz 100005
int main()
{
    ll t,cs(1),n,k,re;
    sf("%lld",&t);
    while(cs<=t)
    {
        re=0;
        sf("%lld %lld",&n,&k);
        if(n>=k)
        {
            re=1;
            ll rr,xx,z;
            rr=xx=1;
            for(ll i=2; i<=k; i++)
                re=re*i;
            ll x=1;
            for(ll i=k+1;i<=n;i++){
                rr=rr*i*i,xx*=(x*x),x++;
                z=__gcd(rr,xx);
                rr/=z;
                xx/=z;
            }
            re*=rr;
            re=re/__gcd(re,xx);
        }
        pf("Case %lld: %lld\n",cs++,re);
    }
    return 0;
}
