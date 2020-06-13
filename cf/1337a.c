#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define sz 200001
#define ll long long
int main()
{
    int t;
    ll a,b,c,d,x,y,z;
    sf("%d",&t);
    while(t--)
    {
        sf("%lld %lld %lld %lld",&a,&b,&c,&d);
        z=c;
        y=c;
        x=b;
        pf("%lld %lld %lld\n",x,y,z);
    }
    return 0;
}
