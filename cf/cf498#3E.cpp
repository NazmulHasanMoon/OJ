#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 200005
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
int a[sz],cl[sz];
bool vis[sz];
map<int,int>mp;
vector<int>v[sz],node;
void dfs(int u)
{
    vis[u]=true;
    node.push_back(u);
    for(auto i:v[u]){
        if(vis[i]==false){
            dfs(i);
            cl[u]+=cl[i]+1;
        }
    }
}
int main()
{
    faster
    int n,q,u,k,pos;
    cin>>n>>q;
    for(int i=1;i<n;i++)
        cin>>a[i],v[a[i]].push_back(i+1) ;
    dfs(1);
    int j(0);
    for(auto i:node){
        mp[i]=j;
        //cout<<mp[i]<<' ';
        j++;
    }
    while(q--)
    {
        cin>>u>>k;
        if(cl[u]+1<k)
            cout<<"-1\n";
        else
            cout<<node[mp[u]+k-1]<<'\n';

    }
    return 0;
}

