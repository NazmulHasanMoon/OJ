#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define cs(x,y) pf("Case %lld: %lld\n",x,y)
int main()
{
    ll t,i(1),a,b,n,m;
    sf("%lld",&t);
    while(i<=t)
    {
        sf("%lld %lld",&a,&b);
        n=b%a;
        m=1;
        while(n)
        {
            n=n*10+b;
            if(n>=a)
                n%=a;
            m++;
        }
        ///cout<<m<<endl;
        cs(i++,m);
    }
    return 0;
}
