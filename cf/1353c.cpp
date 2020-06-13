#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x=n/2;
        x*=x;
        ll s=0;
        for(ll i=1;i*i<=x;i++)
            s+=(i*i);
        cout<<s*8<<'\n';
    }
    return 0;
}
