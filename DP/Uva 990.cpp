#include<stdio.h>
#define sf scanf
#define pf printf
#define sz 1100
#define ll long long
int t,w,n;
int c[40],a[40];
int dp[40][sz],sol[40][sz],ans[40],k;
int knapsack(int i,int cap)
{
    if(i==n)
        return 0;
    if(dp[i][cap]!=-1)return dp[i][cap];
    int p1,p2;
    if(cap+a[i]<=t)p1=c[i]+knapsack(i+1,cap+a[i]);
    else p1=0;
    p2=knapsack(i+1,cap);
    if(p1>p2)dp[i][cap]=p1,sol[i][cap]=1;
    else
    {
        dp[i][cap]=p2;
        sol[i][cap]=2;
    }
    return dp[i][cap];
}
int solve(int i,int j)
{
    if(sol[i][j]==-1)return 0;
    if(sol[i][j]==1)
    {
        ans[k++]=i;
        return 1+solve(i+1,j+a[i]);
    }
    else
        return solve(i+1,j);
}
int main()
{
    int w;
    bool flag=0;
    while(sf("%d %d",&t,&w)==2)
    {
        if(flag)
            pf("\n");
        sf("%d",&n);
        w*=3;
        k=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<sz;j++)
                dp[i][j]=sol[i][j]=-1;
        }
        for(ll i=0;i<n;i++)
            sf("%d %d",&a[i],&c[i]),a[i]*=w;
        pf("%d\n",knapsack(0,0));
        pf("%d\n",solve(0,0));
        ///pf("%d\n",k);
        for(int i=0;i<k;i++)
            pf("%d %d\n",a[ans[i]]/w,c[ans[i]]);
        flag=1;
    }
    return 0;
}
