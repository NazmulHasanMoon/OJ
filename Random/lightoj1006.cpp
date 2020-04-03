#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        int dp[10005];
        int a,b,c,d,e,f;
        memset(dp,0,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        dp[0]=a%10000007;
        dp[1]=b%10000007;
        dp[2]=c%10000007;
        dp[3]=d%10000007;
        dp[4]=e%10000007;
        dp[5]=f%10000007;
        int x=dp[0]+dp[1]+dp[2]+dp[3]+dp[4];
        ///dp[6]=(dp[0]+dp[1]+dp[2]+dp[3]+dp[4]+dp[5])%10000007;
        for(int i=6;i<=n;i++){
            x+=dp[i-1];
            dp[i]=x%10000007;
            x-=dp[i-6];
        }
        printf("Case %d: %d\n", ++caseno, dp[n] % 10000007);
    }
    return 0;
}
