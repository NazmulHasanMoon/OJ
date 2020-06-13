#include<stdio.h>
#define ll long long
#define sf scanf
#define pf printf
ll dp[100];
ll fac(ll n)
{
    if(n<=1)
        return 1;
    if(dp[n])
        return dp[n];
    dp[n]=n*fac(n-1);
    return dp[n];
}
int main()
{
    ll n;
    while(sf("%lld",&n)!=EOF){
        if(n>13||(n<0&&(n&1)))
            pf("Overflow!\n");
        else if((n>=0&&n<8)||(n<0&&!(n&1)))
            pf("Underflow!\n");
        else
            pf("%lld\n",fac(n));
    }
    return 0;
}
