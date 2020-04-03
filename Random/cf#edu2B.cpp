#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200001
#define ff first
#define ss second
int a[sz],b[sz],c[sz];
map<int,int>mp;
int main()
{
    faster
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<m; i++)
        cin>>b[i],mp[b[i]]=i;
    map<int,int>::iterator it=mp.begin();
    for(int i=0; i<n&&it!=mp.end();)
    {
        if(a[i]<=it->ff)
        {
            c[it->ss]++;
            i++;
        }
        else
        {
            int x=it->ss;
            it++;
            if(it!=mp.end())
                c[it->ss]=c[x];
        }
    }

    if(it!=mp.end())
    {
        int x=it->ss;
        it++;
        for(; it!=mp.end(); it++)
        {
            c[it->ss]=c[x];
            x=it->ss;
        }
    }
    for(int i=0; i<m; i++)
    {
        if(c[i]==0)
            c[i]=c[mp[b[i]]];
        cout<<c[i]<<' ';
    }
    cout<<'\n';
    return 0;
}
