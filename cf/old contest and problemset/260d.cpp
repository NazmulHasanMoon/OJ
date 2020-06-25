#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 100001
#define ff first
#define ss second
#define pb push_back
bool vis[sz];
vector<pair<int,int>>col[2];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        col[x].pb({y,i});
    }
    sort(col[0].begin(),col[0].end());
    sort(col[1].begin(),col[1].end());
    x=col[0].size();
    y=col[1].size();
    int a,b;
    a=b=0;
    vector<pair<pair<int,int>,int>>ans;
    while(a<x&&b<y)
    {
        int p,q;
        p=min(col[0][a].ff,col[1][b].ff);
        col[0][a].ff-=p;
        col[1][b].ff-=p;
        ans.pb({{col[0][a].ss,col[1][b].ss},p});
        if(col[0][a].ff==0&&a<x-1)a++;
        else if(col[1][b].ff==0)b++;

    }
    for(auto i:ans)
        cout<<i.ff.ff<<' '<<i.ff.ss<<' '<<i.ss<<'\n';
    return 0;
}
