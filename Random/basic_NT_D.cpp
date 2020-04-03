#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
#define sz 1000002
int p[sz/2],vis[sz],j;
void sieve()
{
    int l=1000;
    int n=1000000;
    p[j++]=2;
    for(int i=4; i<=n; i+=2)
        vis[i]=1;
    for(int i=3; i<=n; i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<=l)
            {
                for(int k=i*i; k<=n; k+=i*2)
                    vis[k]=1;
            }
        }
    }
}
ll NOD(ll x)
{
    ll z(1),y(0);
    for(int i=0; (ll)p[i]*p[i]<=x&&i<j; i++)
    {
        y=0;
        if(x%(ll)p[i]==0)
        {
            while(x%(ll)p[i]==0)
            {
                x/=(ll)p[i];
                y++;
            }
            z*=(y+1);
        }
    }
    if(x>1)
        z*=2;
    return (z-1);
}
int main()
{
    sieve();
    ll t,n,cs(1);
    sf("%lld",&t);
    while(cs<=t)
    {
        sf("%lld",&n);
        n=NOD(n);
        pf("Case %lld: %lld\n",cs++,n);
    }
    return 0;
}
