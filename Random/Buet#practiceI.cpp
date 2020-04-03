#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define ll long long
int n,vis[30002];
ll re,mx;
vector<pair<int,int> >vc[30002];
vector<pair<int,int> >::iterator it;
void dfs(int i)
{
    for(it=vc[i].begin();it!=vc[i].end();it++)
    {

        if(!vis[it->ff])
            re+=(ll)it->ss,vis[it->ff]=1,cout<<vis[it->ff]<<' '<<i<<endl,vis[i]=1,dfs(it->ff);
        mx=max(mx,re);
        re=0;
    }
}
int main()
{
    int t,i,u,v,w,Case(1);
    sf("%d",&t);

    while(Case<=t)
    {
        sf("%d",&n);
        n--;
        for(i=0;i<n;i++)
        {
            sf("%d %d %d",&u,&v,&w);
            vc[u].push_back({v,w});
            vc[v].push_back({u,w});
        }
        mx=-1;
        for(i=0;i<=n;i++){
            dfs(i);
            memset(vis,0,sizeof(vis));
            cout<<endl;
        }
        pf("Case %d: %lld\n",Case++,mx);
    }
    return 0;
}

