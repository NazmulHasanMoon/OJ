#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200
int a[sz],c[sz],x;
unordered_map<int,int>mp;
int main()
{
    faster
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=1;i<n;i++)
    {
        if(a[i-1]!=a[i])
            mp[a[i]-a[i-1]]++,x=a[i]-a[i-1];
    }
    if(mp.size()>1)
        return cout<<"-1\n",0;
    if(x&1)
        cout<<x<<'\n';
    else
        cout<<x/2<<'\n';
    return 0;
}
