#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define sf scanf
#define pf printf
#define ss second
#define ff first
vector<pii>v;
int main()
{
    int n,m,x,y,z=INT_MAX;
    sf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        sf("%d %d",&x,&y);
        z=min(z,x);
        v.push_back({x,y});
    }
    if(z>0)
    {
        pf("no\n");
        return 0;
    }
    //sort(v.begin(),v.end());
    bool t=true;
    for(int i=0;i<n-1;i++)
    {
        if(v[i].ss>=v[i+1].ff){
            v[i+1].ss=max(v[i+1].ss,v[i].ss);
            //x=v[i+1].ss;
        }
        else
        {
            t=false;
            break;
        }
    }
    if(v[n-1].ss<m)
        t=false;
    if(t)
        pf("yes\n");
    else
        pf("no\n");
    return 0;
}
