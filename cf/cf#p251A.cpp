#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
#define ll long long
ll a[sz];
int main()
{
    faster
    ll n,d,ans(0);
    cin>>n>>d;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        ll x=upper_bound(a+i+1,a+n,a[i]+d)-a;
        x-=(i+1);
        if(x>=2)
            ans+=(x*(x-1))/2;//cout<<ans<<' '<<i<<' '<<x<<endl;
    }
    cout<<ans<<'\n';
    return 0;
}
