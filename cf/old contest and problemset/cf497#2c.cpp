#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100005
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
map<int,int>mp;
int main()
{
    faster
    int n,a,mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a,mp[a]++,mx=max(mx,mp[a]);
    cout<<n-mx<<'\n';
    return 0;
}

