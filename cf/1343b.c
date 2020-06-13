#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
#define sz 100001
int dp[sz];
int main()
{
    int t,n;
    sf("%d",&t);
    int i=2,j=1;
    for(i=2;j<sz;i+=2,j++)
        dp[j]=i;
    while(t--)
    {
        sf("%d",&n);
        if((n/2)&1)
        {
            pf("NO\n");
            continue;
        }
        int x=n/2;
        int f,s;
        pf("YES\n%d",dp[1]);
        for(f=2;f<=x;f++)
            pf(" %d",dp[f]);
        for(f=1,s=x;f<s;f++,s--)
        {
            pf(" %d %d",dp[f]-1,dp[s]+1);
        }
        pf("\n");
    }
    return 0;
}
