#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
#define sz 100005
map<string,int>mp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,c;
    int n;
    cin>>n>>s;
    int mx=INT_MIN;
    for(int i=1;i<n;i++)
    {
        c.push_back(s[i-1]);
        c.push_back(s[i]);
        mp[c]++;
        mx=max(mp[c],mx);
        c.clear();
    }
    for(auto i:mp)
    {
        if(i.ss==mx)
        {
            cout<<i.ff<<'\n';
            return 0;
        }
    }
    return 0;
}
