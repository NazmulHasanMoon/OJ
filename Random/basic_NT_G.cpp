#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    ll t,cs(1);
    sf("%lld",&t);
    ll x,y,i;
    while(cs<=t)
    {
        char c[300];
        sf("%s %lld",c,&x);
        i=y=0;
        x=abs(x);
        if(c[0]=='-')
            i=1;
        for(; c[i]!='\0'; i++)
        {
            y=y*10+(c[i]-'0');
            if(y>=x)
                y=y%x;
        }
        if(!y)
            pf("Case %lld: divisible\n",cs++);
        else
            pf("Case %lld: not divisible\n",cs++);
        c[0]='\0';
    }
    return 0;
}
