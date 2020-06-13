#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    ll t,p,q,r,sum;
    sf("%lld",&t);
    while(t--)
    {
        sf("%lld %lld %lld",&p,&q,&r);
        sum=q+r+(q+r)%10;
        ll arr[5],x=0;
        for(int i=0;i<4;i++)
        {
            if(!i)
                arr[i]=((q+r)*2)%10;
            else
                arr[i]=(arr[i-1]*2)%10;
            x+=arr[i];
        }
        ll rem=(p-3)%4;
        ll div=(p-3)/4;
        sum+=x*div;
        ///pf("%lld %lld\n",sum,x);
        x=0;
        if(rem)
        {
            for(int i=0;i<rem;i++)
                x+=arr[i];
        }
        sum+=x;
        ///pf("%lld %lld\n",sum,x);
        if(sum%3==0)pf("YES\n");
        else pf("NO\n");
    }
    return 0;
}
