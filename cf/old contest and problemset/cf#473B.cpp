#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,r,x,y;
    cin>>n>>k>>r;
    string s;
    map<string,int>mp;
    map<int,int>mv;
    vector<string>v;
    int a[n+2];
    long long mn;
    for(int i=0;i<n;i++)
        cin>>s,v.push_back(s);
    for(int i=0;i<n;i++)
        cin>>a[i],mp[v[i]]=a[i],mv[i+1]=a[i];
    int b[n+2];
    for(int i=0;i<k;i++)
    {
        cin>>x;
        mn=1e12;
        for(int j=0;j<x;j++){
            cin>>b[j];
            //cout<<mv[b[j]]<<endl;
            mn=min(mn,(long long)mv[b[j]]);
        }
        for(int j=0;j<x;j++)
            mp[v[b[j]-1]]=(int)mn;
    }
    long long re(0);
    for(int i=0;i<r;i++){
        cin>>s;
        re+=(long long)mp[s];
    }
    cout<<re<<'\n';
    return 0;
}
