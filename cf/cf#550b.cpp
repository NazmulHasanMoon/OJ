#include<bits/stdc++.h>
using namespace std;
#define sz 18
int a[sz];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l,r,x,c(0);
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int y;
    vector<int>v;
    int w=1<<n;
    int s(0);
    for(int i=1;i<=w;i++)
    {
        y=i;
        v.clear();
        while(y)
        {
            v.push_back(y%2);
            y/=2;
        }
        int z=v.size();
        int mn,mx;
        mn=INT_MAX;
        mx=INT_MIN;
        s=0;
        for(int j=0;j<z;j++)
        {
            if(v[j]==1)
                s+=a[j],mn=min(mn,a[j]),mx=max(mx,a[j]);
        }
        if(s>=l&&s<=r&&mx-mn>=x)
            c++;
    }
    cout<<c<<'\n';
    return 0;
}
