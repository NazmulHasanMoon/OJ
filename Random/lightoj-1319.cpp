#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
#define cs(x,i) pf("Case %d: %lld\n",x,i)
#define sz 42
ll arr[sz],p[sz],M[sz],x[sz],y[sz];
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1%m;
    if(b%2==0){
        int x=bigmod(a,b/2,m);
            return (x*x)%m;
    }
    else
        return ((a%m)*bigmod(a,b-1,m))%m;
}
int main()
{
    int t,n,c(1);
    ll re,MM;
    sf("%d",&t);
    while(c<=t)
    {
        MM=1;
        re=0;
        sf("%d",&n);
        for(int i=0;i<n;i++)
             sf("%lld %lld",&p[i],&arr[i]),MM*=p[i];

        for(int i=0;i<n;i++)
            M[i]=MM/p[i],x[i]=M[i]%p[i],y[i]=bigmod(x[i],p[i]-2,p[i]);

        for(int i=0;i<n;i++)
            re+=((arr[i]*M[i]*y[i])%MM);

        cs(c++,re%MM);
    }
    return 0;
}
