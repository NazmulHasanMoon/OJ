#include<bits/stdc++.h>
using  namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
#define sz 1001
int P[sz],W[sz];
int dp[sz][31];
int profit1,profit2;
int KnapSack(int i,int cap)
{
    if(i==-1)return 0;
    if(dp[i][cap]!=-1)return dp[i][cap];
    if(cap-W[i]<0){
            dp[i][cap]=KnapSack(i-1,cap);
            return dp[i][cap];
    }
    else{
        dp[i][cap]=max(P[i]+KnapSack(i-1,cap-W[i]),KnapSack(i-1,cap));
        return dp[i][cap];
    }
}
int main()
{
    faster;
    int n,g,p,w,v,t,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<n; i++)
            cin>>P[i]>>W[i];
        cin>>g;
        for(int i=0; i<g; i++)
        {
            cin>>v;
            ans+=KnapSack(n-1,v);
            ///cout<<ans<<"!\n";
        }
        cout<<ans<<'\n';
    }
    return 0;
}
