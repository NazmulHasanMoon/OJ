#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
int dp[6][7490];
int coinchange(int arr[],int g,int n)
{
    if(n==0)
        return 1;
    if(n<0||g<0&&n>0)
        return 0;
    if(dp[g][n]!=-1)
        return dp[g][n];
    dp[g][n]=coinchange(arr,g,n-arr[g])+coinchange(arr,g-1,n);
    return dp[g][n];
}
int main()
{
    faster
    int n,g,arr[]= {50,25,10,5,1};
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
        cout<<coinchange(arr,4,n)<<'\n';
    return 0;
}

