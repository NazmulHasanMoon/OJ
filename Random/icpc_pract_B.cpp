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
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll x,y;
        if(n&1)
            x=((n/2)+1)*m;
        else{
                ll p,q;
                p=n/2;
                q=p+1;
                x=(q*(m/2))+(p*(m-(m/2)));
        }
        if(m&1)
            y=((m/2)+1)*n;
        else
        {
            ll p,q;
            p=m/2;
            q=p+1;
            y=(q*(n/2))+(p*(n-(n/2)));
        }
        cout<<min(x,y)<<'\n';
    }
    return 0;
}

