#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
map<int,int>mp;
set<int>st;
int main()
{
    faster
    int n,t,x,s(0);
    cin>>n>>t;
    for(int i=0;i<t;i++)
        cin>>x,mp[x]++,s+=x;
    if(s<n)
        cout<<"0\n";
    else
    {
        int mx(0),sum,w,ans(0);
        for(int i=1;i<=100;i++)
        {
            sum=0;
            for(auto j:mp){
                sum+=(j.ss / i);
            }
            //cout<<sum<<'*';
            if(sum>=n)
                ans=i;
            else
                break;

        }
        cout<<ans<<'\n';
    }
    return 0;
}

