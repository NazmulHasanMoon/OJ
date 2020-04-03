#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
#define sf scanf
#define pf printf
#define mod 100000007
#define Case(x,y) pf("Case %d: %d\n",x,y);
int dp[51][1002];
int arr[51],c[51];
int coinchange(int g,int coin)
{
    if(coin<0||g<0&&coin>0)
        return 0;
    if(coin==0)
        return 1;
    if(dp[g][coin]!=-1)
        return dp[g][coin];
    int p1=0,p2=0;
    for(int i=1; i<=c[g]; i++)
    {
        if(coin>=(arr[g]*i))
            p1+=coinchange(g-1,coin-(arr[g]*i))%mod;
    }
    p2+=coinchange(g-1,coin)%mod;
    dp[g][coin]=(p1+p2)%mod;
    return dp[g][coin];
}
int main()
{
    faster
    int n,coin,t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d %d",&n,&coin);
        for(int i=0; i<n; i++)
            sf("%d",&arr[i]);
        for(int i=0; i<n; i++)
            sf("%d",&c[i]);
        memset(dp,-1,sizeof(dp));
        Case(cs++,coinchange(n-1,coin));
    }
    return 0;
}

