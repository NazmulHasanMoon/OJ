#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
typedef long long ll;
#define sz 100005
int a[sz],b[sz];
map<int,int>mp;
int main()
{
    int n,k,m,j(0);
    sf("%d %d %d",&n,&k,&m);
    for(int i=0; i<n; i++)
    {
        sf("%d",&a[i]);
        mp[a[i]]++;

    }
    for(int i=0; i<n; i++)
    {
        int x=a[i]-m;
        if(mp.find(x)!=mp.end())
        {
            if(mp[x]>0)
                b[j++]=x;
            b[j++]=a[i];
            mp[x]--;
            mp[a[i]]--;
        }
    }
    if(j<k)
        pf("No\n");
    else
    {
        pf("Yes\n");
        for(int i=0; i<k; i++)
            pf("%d ",b[i]);
        pf("\n");
    }
    return 0;
}
