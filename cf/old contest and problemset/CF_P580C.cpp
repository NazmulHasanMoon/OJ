#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)

#define si(a) sf("%d",&a)
#define sl(a) sf("%I64d",&a)
#define sii(a,b) sf("%d%d",&a,&b)
#define Pi(a) pf("%d\n",a)
#define Pin(a) pf("%d ",a)
#define Pl(a) pf("%I64d\n",a)
#define pln(a) pf("%I64d ",a)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(x) cout<<"Case "<<x<<": "
#define ll long long
/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647
int a[SIZE],cat[SIZE],ans;
vector<int>adj[SIZE];
int n,m,x,y;
bool vis[SIZE];
void dfs(int u,int total)
{
    ///cout<<total<<'-'<<u<<endl;
    if(total>m)
        return;
    if(u>1&&total<=m&&adj[u].size()==1)
        ans++;///cout<<u<<'!';
    loopa(i,adj[u])
    {
        if(!vis[i])
        {
            ///cout<<i<<'='<<u<<endl;
            vis[i]=true;
            if(cat[i])
                cat[i]=total+1;
            else
                cat[i]=0;
            dfs(i,cat[i]);
        }
    }
}
int main()
{
    faster

    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>cat[i];
    loop(i,1,n)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vis[1]=true;
    dfs(1,cat[1]);
    cout<<ans<<endl;
    return 0;
}
