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
    ll n,m,cnt,s,w,x,y;
    cnt=s=w=0;
    cin>>n>>m;
    //vector<pair<ll,ll>>v;
    vector<ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        //v.push_back({x,y});
        mp.push_back(x-y);
        cnt+=x;
        s+=y;
    }
    if(s>m)
    {
        cout<<"-1\n";
        return 0;
    }
    sort(all(mp));
    int z=mp.size();
    for(int i=z-1;i>=0;i--)
    {
        if(cnt>m)
            cnt-=mp[i],w++;
    }
    cout<<w<<'\n';
    return 0;
}

