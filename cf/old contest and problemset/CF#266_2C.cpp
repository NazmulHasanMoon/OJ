#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 500005
#define ll long long
ll a[sz],cnt[sz];
int main()
{
    faster
    ll n,s,x,y,z,zero(0);
    cin>>n;
    x=y=z=s=0;
    for(ll i=0;i<n;i++)
        cin>>a[i],s+=a[i];
    if(s%3!=0){
        cout<<"0\n";
        return 0;
    }
    s/=3;
    for(ll i=n-1;i>=0;--i)
    {
        x+=a[i];
        if(x==s)
            cnt[i]=1;
    }
   // sum[n-1]=cnt[n-1];
    for(ll i=n-2;i>=0;--i)
        cnt[i]+=cnt[i+1];

    for(int i=0;i+2<n;++i)
    {
        y+=a[i];
        if(y==s)
            z+=cnt[i+2];
    }
    cout<<z<<'\n';
    return 0;
}
