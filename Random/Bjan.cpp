#include<bits/stdc++.h>
#define     sf       scanf
#define     pf       printf
#define     ll       long long
#define     sz       100000001
#define     pi       acos(-1.0)
#define     ff       first
#define     ss       second
#define     pb       push_back
#define     all( x)   x.begin(),x.end()

using namespace std;

/*----------------- Start Here ----------------*/

int main()
{
    ll a,b,x,y,t;
    ll p,q;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>a>>b;
        x=max(a,b);
        y=min(a,b);
        while(x&&y)
        {
            ll c,d;
            c=x-y*(x/y);
            p+=(x/y);
            //cout<<p<<endl;
            //cout<<c<<endl;
            x=max(c,y);
            y=min(c,y);
        }
        cout<<p<<endl;
    }
    return 0;
}
