#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
#define ll long long
ll res(ll m)
{
    ll re=0;
    if(m<10)
        return (m*(m+1))/2;
    ll x,i,z,d;
    x=(m%10==0)?m/10 : m/10 + 1;
    re+=(x*46);
    re+=((x*10*(x-1))/2);
    x*=10;
    d=x-m;
    if(d)
    {
        while(x%10==0)
            x/=10;
        i=m+1;
        z=0;
        while(i>0)
        {
            z+=i%10;
            i/=10;
        }
        re-=x;
        d--;
        re-=(z*d);
        re-=(d*(d-1))/2;
    }
    return re;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,x,d,z;
    ll rm,rn;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        rm=res(m);
        rn=res(n-1);
        cout<<rm-rn<<"\n";
    }
    return 0;
}
