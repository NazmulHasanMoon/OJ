#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define ff first
#define ss second
#define sz 1001
int a[sz],b[sz];
map<int,int>mp;
int main()
{
    faster
    int n,mx=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x;
    //queue<int>q;

    //q.push_back(a[n-1]+a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            mp[a[i]+a[j]]++;
    }
    for(auto i:mp)
        mx=max(mx,i.ss);
    cout<<mx<<'\n';
    return 0;
}
