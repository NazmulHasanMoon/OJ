#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    ll a,b;
    cin>>a>>b;
    cout<<"YES\n";
    ll x=((b-a)+1)/2;
    for(ll i=1,j=a;i<=x;i++,j++)
    {
        cout<<j++<<' '<<j<<'\n';
    }
    return 0;
}

