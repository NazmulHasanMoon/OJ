#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ff first
int a;
int main()
{
    faster
    int n,x,y;
    vector<int>v;
    x=y=0;
    cin>>n;
    map<int,int>mp;
    unordered_map<int,int>mpp;
    for(int  i=0;i<n;i++){
        cin>>a;
        if(mp.find(a)==mp.end())
            mp[a]=1,x++;
        else{
            mpp[a]++;
            v.push_back(a);
            y++;
            if(mpp[a]>1)
            {
                return cout<<"NO\n", 0;
            }
        }
    }
    cout<<"YES\n";
    cout<<x<<'\n';
    for(auto i:mp)
        cout<<i.ff<<' ';
    cout<<'\n'<<y<<'\n';
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:v)
        cout<<i<<' ';
    cout<<'\n';
    return 0;
}
