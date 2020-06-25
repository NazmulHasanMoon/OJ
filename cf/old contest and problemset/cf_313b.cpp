#include<bits/stdc++.h>
using namespace std;
#define loopn(a,b,c)  for(int a=b;a>c;a--)
#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 100001
int x[sz],dp[sz];
int main()
{
    faster
    string s;
    int n,l,r,i,j;
    cin>>s>>n;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
            x[i+1]=1;
    }
    for(j=1;j<=i;j++)
        dp[j]=dp[j-1]+x[j];///cout<<dp[j]<<' ';
    //cout<<endl;
    loop(i,0,n)
    {
        cin>>l>>r;
        cout<<abs(dp[r]-dp[l])<<endl;
    }
    return 0;
}
