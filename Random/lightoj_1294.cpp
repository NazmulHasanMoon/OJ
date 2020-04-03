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
    //faster
    int t,i(1);
    sf("%d",&t);
    while(i<=t)
    {
        ll n,x,m,y;
        sf("%lld %lld",&n,&m);
        y=m*2;
        x=(y*(y+1))/2 - m*(m+1);
        y=n/y;
        x=x*y;
        pf("Case %d: %lld\n",i++,x);
    }
    return 0;
}

