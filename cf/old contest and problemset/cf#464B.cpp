#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define ll long long
int main()
{
    ll n,k,a,b,c,d,x,e;
    c=2e18;
    e=-1;
    cin>>n>>k;
    for(ll i=0;i<k;i++)
    {
        cin>>a;
        x=(n/a);
        b=n-(x*a);
        if(!i||e>b)
        {
            c=x;
            d=i+1;
            e=b;
        }
        //cout<<a<<' '<<b<<' '<<c<<endl;;
    }
    cout<<d<<' '<<c<<endl;
    return 0;
}
