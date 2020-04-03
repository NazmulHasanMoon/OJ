#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define mod 100000007
#define sz 2000001
ll fac[sz],pw[sz/2];
int j;
void power()
{
    ll n=sz/2;

    for(ll i=2;i<=n;i++)
    {
        ll x=i*i;
        while(x<=10000000000L)
        {
            pw[j++]=x;
            x*=i;
        }
    }
    sort(pw,pw+j);
    j=unique(pw,pw+j)-pw;
}
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
    power();
    factorial();
    ll t,a,b,cs(1);
    sf("%lld",&t);
    int beg,fin,n,x;
    while(cs<=t)
    {
        sf("%lld %lld",&a,&b);
        beg=lower_bound(pw,pw+j,a)-pw;
        fin=lower_bound(pw+beg-1,pw+j,b)-pw;
        if(pw[fin]>b)
            fin--;
        n=fin-beg+1;
        if(!n)
            pf("Case %lld: 0\n",cs++);
        else{
            ll z=((fac[n+1]%mod)*(fac[n]%mod))%mod;
            pf("Case %lld: %lld\n",cs++,((fac[2*n]%mod)*bigmod(z,mod-2,mod))%mod);
        }
    }
    return 0;
}
