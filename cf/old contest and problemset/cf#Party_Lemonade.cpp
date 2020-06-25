#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sz 50
#define faster      ios_base::sync_with_stdio(0);cin.tie(0);
unsigned long long a[sz],b[sz];
int main()
{
    faster;
    unsigned long long s(0),n,k,mn,l(0),z;
    mn=INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i],mn=min(a[i],mn);
    b[0]=1;
    for(int i=1;i<n;i++)
    {
        unsigned long long x=a[i-1]+a[i-1];
        b[i]=b[i-1]+b[i-1];
        if(x<a[i])
            a[i]=x;
        //cout<<a[i]<<' ';
    }
    unsigned long long ans=5e18;
    while(k&&n)
    {
        unsigned long long y=k/b[n-1];
        for(unsigned long long i=1;i<=y;i++)
            s+=a[n-1];
        unsigned long long w=(y*b[n-1]);
        k-=w;
        n--;
        ans=min(ans,s+((k>0)?a[n]:0));
        //cout<<s<<' '<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
