#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
ll dp[ 10001];
int main()
{
    faster
    int n,g;
    dp[0]=1;
    for(int i=1;i*i*i<= 9261;i++)
    {
        int x=i*i*i;
        for(int j=x;j<10000;j++)
            dp[j]+=dp[j-x];
    }
    while(cin>>n)
        cout<<dp[n]<<'\n';
    return 0;
}
