#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
map<ll,ll>mp;
int main()
{
    ll n,k,x,y;
    double z;
    y=1e9;
    sf("%I64d %I64d",&n,&k);
    if(n>=y)
    {
        z=sqrt(n+0.0);
        y=(ll)z;
        if(y<z)
            y++;
    }
    if(n==k&&n!=1)
        pf("no\n");
    else
    {
        bool t=true;
        for(ll i=1; i<=y&&i<=k; i++)
        {
            ll z=n%i;
            //cout<<z<<endl;
            if(mp.find(z)!=mp.end())
            {
                t=false;
                break;
            }
            mp[z]=1;
        }
        if(t)
            pf("yes\n");
        else
            pf("no\n");
    }
    return 0;
}
