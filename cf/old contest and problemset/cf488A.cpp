#include<bits/stdc++.h>
using namespace std;
#define sz 100
map<int,int>mp;
int a[sz];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>x,mp[x]=1;
    for(int i=0;i<n;i++){
        if(mp.find(a[i])!=mp.end())
            cout<<a[i]<<' ';
    }
    return 0;
}
