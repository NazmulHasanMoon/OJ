#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(ll a,ll b,ll c)
{
    if(a>=b)
        return (a-b)/2+(a-b)%2;
    if(b%c==0)
        return fun(a,b/c,c)+1;
    else
    {
        ll x=c-b%c;
        b=b+c-(b%c);
        return fun(a,b,c)+x/2+x%2;
    }

}
int main()
{
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<fun(a,b,c)<<'\n';
    }
    return 0;
}
