#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
#define mod 100000000
ll dp[ 101][101][11][11];
ll n,m,x,y;
ll fun(ll a,ll b,ll c,ll d)
{
    if(a==n&&b==m)return 1;
    if(dp[a][b][c][d]!=-1)return dp[a][b][c][d];
    int re=0;
    if(a<n&&c<x)re=(re+fun(a+1,b,c+1,0))%mod;
    if(b<m&&d<y)re=(re+fun(a,b+1,0,d+1))%mod;
    return dp[a][b][c][d]=re%mod;
}
int main()
{
    faster
    cin>>n>>m>>x>>y;
    memset(dp,-1,sizeof(dp));
    cout<<fun(0,0,0,0)<<'\n';
    return 0;
}

