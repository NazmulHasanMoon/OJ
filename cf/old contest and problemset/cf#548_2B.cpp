#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200003
#define ll long long

ll a[sz],cum[sz];
int main()
{
    faster
    int n;
    ll re(0),mx(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cum[n]=a[n];
    for(int i=n-1;i>0;i--)
    {
        if(a[i]<a[i+1])
            cum[i]=cum[i+1]+a[i];
        else
        {
            a[i]=a[i+1]-1;
            if(a[i]>=0)
                cum[i]=cum[i+1]+a[i];
        }
    }
    for(int i=1;i<=n;i++)
        mx=max(mx,cum[i]);
    ///cout<<max(mx,re)<<"\n";
    cout<<mx<<'\n';
    return 0;
}
