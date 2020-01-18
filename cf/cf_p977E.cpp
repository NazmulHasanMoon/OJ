#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 200005
vector<int>v[sz];
bool vis[sz],ck=true;
void dfs(int u)
{
    vis[u]=true;
    if(v[u].size()!=2)
        ck=false;
    loopa(i,v[u])
    {
        if(!vis[i])
            dfs(i);
    }
}
int main()
{
    faster
    int n,m,x,y,re(0);
    cin>>n>>m;
    loop(i,0,m)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(int i=1;i<=n;i++)
    {
        ck=true;
        if(!vis[i])
        {
            dfs(i);
            if(ck)
                re++;
        }
    }
    cout<<re<<endl;
    return 0;
}
