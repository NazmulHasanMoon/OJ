#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define ff first
#define ss second
#define pii pair<int,int>

int main()
{
    int t,cs(1),n,x,y,z,c,re;
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d",&n);
        z=re=0;
        c=1;
        vector<pii>v,v2;
        for(int i=0;i<n;i++)
        {
            sf("%d %d",&x,&y);
            v.push_back({x,y});
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                v2.push_back({v[i].ff+v[j].ff,v[i].ss+v[j].ss}),z++;
        }
        sort(v2.begin(),v2.end());
        for(int i=1;i<z;i++)
        {
            if(v2[i].ff==v2[i-1].ff&&v2[i].ss==v2[i-1].ss)
                c++;
            else
               re+=(c*(c-1))/2,c=1;//cout<<c<<'!'<<re<<'\n';
        }
        ///cout<<c<<' '<<re<<endl;
        re+=(c*(c-1))/2;
        pf("Case %d: %d\n",cs++,re);
    }
    return 0;
}
