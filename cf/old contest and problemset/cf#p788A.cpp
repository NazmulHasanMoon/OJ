#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 100002
#define ll long long
ll a[sz],b[sz];
int main()
{
    faster
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        b[i]=abs(a[i]-a[i+1]);
        if(i&1)
            b[i]=-b[i];
    }
    n--;
    ll x,y,mx1,mx2;
    mx1=mx2=x=y=0;
    for(int i=0;i<n;i++)
    {
        x+=b[i];
        if(i&1)
            y-=b[i];
        else
            y-=b[i];
        mx1=max(mx1,y);
        mx2=max(mx2,x);
        if(y<0)
            y=0;
        if(x<0)
            x=0;
       /// cout<<x<<' '<<y<<' '<<b[i]<<endl;
    }
    cout<<max(mx1,mx2)<<'\n';
    return 0;
}
