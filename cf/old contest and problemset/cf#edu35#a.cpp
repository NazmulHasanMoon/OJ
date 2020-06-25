#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all(x)   x.begin(),x.end()

using namespace std;
int main()
{
    int n,x(0),a[sz],mn=INT_MAX;
    sf("%d",&n);
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        sf("%d",&a[i]);
        mn=min(mn,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
            v.push_back(i),x++;
    }
    int ans=INT_MAX;
    for(int i=1;i<x;i++)
        ans=min(ans,v[i]-v[i-1]);
    //cout<<v[i]<<' '<<v[i-1]<<endl;
    cout<<ans<<endl;
    return 0;
}
