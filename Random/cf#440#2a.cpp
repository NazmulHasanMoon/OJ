#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 10
int a[sz],b[sz];
map<int,int>mp;
int main()
{
    int n,m,mn,mi,mm;
    mn=mi=mm=INT_MAX;
    sf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
    {
        sf("%d",&a[i]);
        mp[a[i]]=1;
        mn=min(mn,a[i]);
    }
    bool t=0;
    for(int i=0;i<m;i++)
    {
        sf("%d",&b[i]);
        if(mp[b[i]]==1)
            mm=min(mm,b[i]),t=1;
        mi=min(mi,b[i]);
    }
    if(t)
        pf("%d\n",mm);
    else if(mi==mn)
        pf("%d\n",mi);
    else{
        if(mn<mi)
            pf("%d%d\n",mn,mi);
        else
            pf("%d%d\n",mi,mn);
    }
    return 0;
}
