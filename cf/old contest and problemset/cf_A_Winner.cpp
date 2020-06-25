#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
map<string,int>mm;
int main()
{
    map<string,int>mp;
    vector<pair<string,int>>v;
    int n;
    cin>>n;
    int mx=INT_MIN;
    string ans;
    for(int i=0; i<n; i++)
    {
        string s;
        int x;
        cin>>s>>x;
        v.push_back({s,x});
        mp[s]+=x;
    }
    //mx=INT_MIN;
    for(auto i:mp)
        mx=max(mx,i.ss);

    for(int i=0; i<n; i++)
    {
        mm[v[i].ff]+=v[i].ss;
        if(mp[v[i].ff]>=mx&&mm[v[i].ff]>=mx)
        {
            ans=v[i].ff;
            cout<<ans<<endl;
            break;
        }
    }
    //cout<<ans<<endl;
    return 0;
}
