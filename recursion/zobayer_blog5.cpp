#include<bits/stdc++.h>
using namespace std;
int ans,dp[100];
int pw(int i,int x)
{
    if(i==0)
        return 1;
    if(dp[i])return dp[i];
    else
    {
        dp[i]=x*pw(i-1,x);
        return dp[i];
    }

}
int rec(int i,int n,int x)
{
    if(i==0)
        return 1;
    ans+=pw(i-1,x);
    rec(i-1,n,x);
    return ans;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<rec(n,n,x)<<'\n';

    return 0;
}

