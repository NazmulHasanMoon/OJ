#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define mx 1000008
#define ll int
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll bigmod(ll base, ll power, ll mod)
{
    if(power==0)    return 1;
    else if(power%2==1){
        ll p1 = base % mod;
        ll p2 = (bigmod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0){
        ll p1 = (bigmod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
ll ncr(ll n, ll k)
{
    ll C[n + 1][k + 1];
    ll i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    return C[n][k];
}
ll prime[mx];
ll sp[mx];
void seive()
{
    for(int i=2;i<=mx;i+=2) sp[i]=2;
    for(int i=3;i<=mx;i+=2) sp[i]=i;
    ll x=sqrt(mx);
    for(int i=3;i<=x;i+=2){
        if(sp[i]==i){
            for(int j=i*i;j<=mx;j+=i){
                sp[j]=i;
            }
        }
    }
}

void pf(ll n)
{

    ll m=n;
    while(1){
        if(m<=1) break;
        ll x=sp[m];
        while(m%x==0){
            m/=x;
        }
    }
}
ll a[mx];
ll b[mx];
ll dp[mx];
ll call(ll n)
{
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    ll ans;
    if(n&1){
        ans=min(call(n+1),call(n-1));
    }
    else{
        ans=call(n/2);
    }
    return dp[n]=ans;
}
ll dis[mx];
bool vis[mx];
vector<ll>v[mx];
void dfs(ll sn)
{
    vis[sn]=true;
    for(int i=0;i<v[sn].size();i++)
    {
        ll x=v[sn][i];
        if(vis[x]==false){
            dis[x]=dis[sn]+1;
            dfs(x);
        }
    }
}
ll f[mx];
int main () {


    faster
    ll n;
    //scanf("%lld",&n);
    cin>>n;
    //memset(vis,false,sizeof(vis));
    //memset(dis,0,sizeof(dis));
    //cout<<n<<endl;
    mem(vis,0);
    mem(dis,0);
    for(int i=1;i<n;i++){
        ll x,y;
        scanf("%lld %lld",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    ll mn=-1;
    ll node =1;
    for(int i=1;i<=n;i++){
        if(dis[i]>mn){
            mn=dis[i];
            node=i;
        }
    }
    //cout<<node<<" ";
    //memset(dis,0,sizeof(dis));
    //memset(vis,false,sizeof(vis));
    mem(dis,0);
    mem(vis,0);
    dfs(node);
    mn=-1;
    node =1;
    for(int i=1;i<=n;i++){
        if(dis[i]>mn){
            mn=dis[i];
            node=i;
        }
    }
    //cout<<mn<<endl;
    f[0]=1;
    for(ll i=1;i<=30;i++){

        f[i]=f[i-1]*2;
    //cout<<f[i]<< " ";
    }

    if(mn==1){
        cout<<"0\n";
        //printf("0\n");
    }
    for(ll i=1;i<=29;i++){
        //cout<<f[i]<<" "<<mn<<endl;
        if(f[i]>=mn){
            //printf("%lld\n",i);
            cout<<i<<'\n';
            break;
        }

    }


    //cout<<node<<endl;
   return(0);
}
