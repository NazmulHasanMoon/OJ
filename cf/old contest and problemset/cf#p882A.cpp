#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
    faster
    ll l,r,x,y,k,z;
    cin>>l>>r>>x>>y>>k;
    bool ck=false;
    for(ll i=x;i<=y;i++)
    {
        z=i*k;
        ///cout<<z<<endl;
        if(z>=l&&z<=r)
        {
            ck=true;
            break;
        }
    }
    if(ck)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
