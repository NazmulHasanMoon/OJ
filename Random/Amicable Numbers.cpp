#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define S second
#define F first
#define sz 3250
ll p[sz/2],vis[sz],j;
void sieve()
{
    p[j++]=2;
    for(ll i=4; i<sz; i+=2)
        vis[i]=1;
    for(ll i=3; i<sz; i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<=57)
            {
                for(ll k=i*i; k<sz; k+=i*2)
                    vis[k]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    cout<<j<<endl;
    map<ll,ll>mp;
    mp[220]=284;
    mp[1184]=1210;
    for(ll i=10000000; i>2000; i--)
    {
        ll z=i,s,ss;
        ss=1;
        if(!(mp.find(z)!=mp.end()))
        {
            for(ll k=0; k<j&&p[k]<=z; k++)
            {
                if(z%p[k]==0)
                {
                    s=p[k];
                    while(z%p[k]==0)
                    {
                        s*=p[k];
                        z/=p[k];
                    }
                    s--;
                    s/=(p[k]-1);
                    //cout<<s<<'*';
                    ss*=s;
                }
            }
            if(z>1)
            {
                s=z*z;
                s=(s-1)/(z-1);
                ss*=s;
            }
            ss-=i;
            mp[ss]=i;
            //cout<<ss<<'-'<<i<<endl;
        }
    }
    for(auto i:mp)
        cout<<i.F<<' '<<i.S<<'\n';
    return 0;
}
