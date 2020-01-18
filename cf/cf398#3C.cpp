#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 200005
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
ll a[sz];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);
    ll x,y,z,n,s1,s3;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    x=0,y=n-1;
    if(n==1)
    {
        cout<<"0\n";
        return 0;
    }
    s1=a[x],s3=a[y];
    z=0;
    for(;x<y;)
    {
        if(s1==s3)
            z=max(z,s1),x++,y--,s1+=a[x],s3+=a[y];
        else if(s1<s3)
        {
            x++;
            s1+=a[x];
        }
        else if(s3<s1)
        {
            y--;
            s3+=a[y];
        }
    }
    cout<<z<<'\n';
    return 0;
}
