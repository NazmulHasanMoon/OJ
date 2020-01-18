#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define sz 100001
int x[sz];
long long dp[sz][3];
int main()
{
    int n,a,b,c;
    sf("%d %d %d %d",&n,&a,&b,&c);

    for(int i=1; i<=n; i++)
    {
        sf("%d",&x[i]);
        if(i==1)
        {
            dp[i][0]=(long long)a*x[i];
            dp[i][1]=dp[i][0]+(long long)b*x[i];
            dp[i][2]=dp[i][1]+(long long)c*x[i];
        }
        else
        {
            dp[i][0]=max(dp[i-1][0],(long long)a*x[i]);
            dp[i][1]=max(dp[i-1][1],dp[i][0]+(long long)b*x[i]);
            dp[i][2]=max(dp[i-1][2],dp[i][1]+(long long)c*x[i]);
        }
    }
    cout<<dp[n][2]<<endl;
    return 0;
}
