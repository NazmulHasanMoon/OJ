#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll s[63];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    ll n;
    s[1]=1;
    s[2]=3;
    ll x=1;
    for(int i=3;i<=62;i++)
    {
        s[i]=x+s[i-1];
        x=s[i];
        s[i]+=i;

    }
    int y;
    ll ans,z;
    while(t--)
    {
        y=0;
        cin>>n;
        ans=0;
        x=n;
        while(x)
        {
            x>>=1;
            y++;
        }

        ans+=s[y];
        x=1LL<<(y-1);

        while(x!=n)
        {
            z=n-x;
            y=0;
            n=z;
            while(z)
            {
                z>>=1;
                y++;
            }
            ans+=s[y];
            if(!y)break;
            x=1LL<<(y-1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
