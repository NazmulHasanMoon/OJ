#include<stdio.h>
#include<iostream>
using namespace std;
#define sf scanf
#define pf printf
#define Case(x,y) pf("Case %d: %d\n",x,y)
int a[22][4],dp[22][4],n;
int fun(int i,int col)
{
    if(i>n)
        return 0;
    if(dp[i][col]!=-1)return dp[i][col];
    if(i==0)
    {
        int ans=1e9;
        ans=min(ans,a[i+1][0]+fun(i+1,0));
        ans=min(ans,a[i+1][1]+fun(i+1,1));
        ans=min(ans,a[i+1][2]+fun(i+1,2));
        return dp[i][col]=ans;
    }
    else
    {
        int ans=1e9;
        if(col==0){
            ans=min(ans,a[i+1][1]+fun(i+1,1));
            ans=min(ans,a[i+1][2]+fun(i+1,2));
            ///cout<<ans<<' '<<a[i+1][1]<<" #0 "<<a[i+1][2]<<'\n';
            return dp[i][col]=ans;
        }
        else if(col==1){
            ans=min(ans,min(a[i+1][0]+fun(i+1,0),a[i+1][2]+fun(i+1,2)));
            ///cout<<ans<<' '<<a[i+1][0]<<" #1 "<<a[i+1][2]<<'\n';
            return dp[i][col]=ans;
        }
        else if(col==2){
            ans=min(ans,min(a[i+1][0]+fun(i+1,0),a[i+1][1]+fun(i+1,1)));
            ///cout<<ans<<' '<<a[i+1][0]<<" #2 "<<a[i+1][1]<<'\n';
            return dp[i][col]=ans;
        }
    }
}
int main()
{
    int t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d",&n);
        for(int i=0;i<=21;i++)
            a[i][0]=a[i][1]=a[i][2]=0,dp[i][0]=dp[i][1]=dp[i][2]=-1;
        for(int i=1;i<=n;i++)
            sf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        Case(cs++,fun(0,0));

    }
    return 0;
}
