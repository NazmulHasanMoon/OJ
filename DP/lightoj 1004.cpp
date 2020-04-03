#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
#define sf scanf
#define pf printf
#define mod 100000007
#define pb push_back
#define Case(x,y) pf("Case %d: %lld\n",x,y);
#define ll long long
ll arr[10001][101],dp[10001][101];
int n;
ll MBP(int i,int j,int k)
{
    if(k<(2*n-1))
    {
        if((k<n&&i>=0&&i<=k&&j>=0&&j<=k)||(k>=n&&(i>=0&&i<=k&&j>=0&&j<(2*n-1)-k)))
        {
            if (dp[i][j] != -1)
                return dp[i][j];
            ll ret = -100;
            ret = max(ret, MBP(i + 1, j,k+1) + arr[i][j]);
            if(k+1>=n&&(i>=0&&i<=k&&j>=0&&j<(2*n-1)-k))
                ret = max(ret, MBP(i + 1, j - 1,k+1) + arr[i][j]);
            else
                ret = max(ret, MBP(i + 1, j + 1,k+1) + arr[i][j]);
            return dp[i][j] = ret;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    ///faster
    int i,coin,t,cs(1),x;
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d",&n);
        for(i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
                cin>>arr[i][j],dp[i][j]=-1;
        }
        x=n*2-1;
        for(int k=1; i<x; i++,k++)
        {
            for(int j=0; j<(n-k); j++)
                cin>>arr[i][j],dp[i][j]=-1;
        }
        Case(cs++,MBP(0,0,0));
    }
    return 0;
}
