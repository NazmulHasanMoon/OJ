#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define pb push_back
#define ff first
int a[200001],b[200001],pos[200001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,y,ans,z;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>z,a[z]=i;
    for(int i=0; i<n; i++)
        cin>>z,b[z]=i;
    ans=0;
    bool flag;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        if(a[i]<b[i])
            a[i]+=n;
        y=a[i]-b[i];
        mp[y]++;
        ans=max(ans,mp[y]);
    }
    cout<<ans<<endl;
    return 0;
}
