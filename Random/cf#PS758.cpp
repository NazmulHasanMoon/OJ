#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define sz 102
ll a[sz],n;
int main()
{
    ll s(0),x;
    sf("%lld",&n);
    for(ll i=0;i<n;i++)
        sf("%lld",&a[i]);
    sort(a,a+n);
    x=a[n-1];
    for(int i=0;i<n;i++)
        s+=x-a[i];
    pf("%lld\n",s);
    return 0;
}
