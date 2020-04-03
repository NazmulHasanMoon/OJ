#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int coinchange(int arr[],int g,int n)
{
    if(n==0)return 1;
    if(n<0||g<0&&n>0)return 0;
    if(dp[g][n]!=-1)return dp[g][n];
    dp[g][n]=coinchange(arr,g,n-arr[g])+coinchange(arr,g-1,n);
    return dp[g][n];
}
int main()
{
    int n,g,arr[1000];
    cin>>n;
    cin>>g;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<g;i++)cin>>arr[i];
    cout<<coinchange(arr,g-1,n)<<endl;
    return 0;
}
