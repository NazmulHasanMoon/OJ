#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int main()
{
    faster
    int t;
    cin>>t;
    map<pair<int,int>,int>mp;
    while(t--)
    {
        int m,k,l,r,x;
        cin>>m>>k;
        for(int i=0;i<n;i++)
            cin>>l>>r>>x,mp[{l,r}]=((r-l)+1)*x;

    }
    return 0;
}

