#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define mod 1000003
#define sz 1000001
ll fac[sz];
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1%m;
    ll x=bigmod(a,b/2,m);
    //cout<<x<<endl;
        x=(x*x)%m;
    if(b%2==1)
        x=(a*x)%m;
    return x;
}
void factorial()
{
    fac[0]=fac[1]=1;
    for(int i=2;i<sz;i++)
        fac[i]=((fac[i-1]%mod)*(i%mod))%mod;
}
int main()
{
    factorial();
    int t,cs(1);
    sf("%d",&t);
    int n,k;
    while(cs<=t)
    {
        sf("%d %d",&n,&k);
        if(k==0||k==n)
            pf("Case %d: 1\n",cs++);
        else{
            ll z=((fac[n-k]%mod)*(fac[k]%mod))%mod;
            pf("Case %d: %lld\n",cs++,((fac[n]%mod)*bigmod(z,mod-2,mod))%mod);
        }
    }
    return 0;
}
