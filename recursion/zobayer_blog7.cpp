#include<bits/stdc++.h>
using namespace std;
int dp[100];
int fib(int i)
{
    if(i<=2)
        return 1;
    if(dp[i])return dp[i];
    else{
        dp[i]=fib(i-1)+fib(i-2);
        return  dp[i];
    }
}
int main()
{
    int x,n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}



