#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz 200005
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>vec[sz];
bool vis[sz];
int v[sz],re;
int n,m,x,y;

void dfs(int u)
{
    vis[u]=1;
    vector<int>::iterator it=vec[u].begin();
    if(it==vec[u].end())
    {
        if(v[u]<=m)
            re++;
    }
    for(;it!=vec[u].end();it++)
    {
        if(!vis[*it]){
            if(v[*it]||v[u]>m)
                v[*it]+=v[u];
            dfs(*it);
        }
    }
}
int main()
{
    faster
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    dfs(1);
    cout<<re<<'\n';
    return 0;
}
