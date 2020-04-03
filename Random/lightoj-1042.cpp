#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long

int main()
{
    ll t,n,i(1);
    sf("%lld",&t);
    ll a[34],k(0);
    for(int j=0; j<31; j++)
        a[k++]=1<<j;
    a[k]=2*a[k-1];
    a[k+1]=2*a[k];
    while(i<=t)
    {
        sf("%lld",&n);
        deque<int>d;
        ll v=n;
        d.clear();
        int x,y;
        x=y=0;
        while(n!=0)
        {
            int z=(int)n%2;
            d.push_front(z);
            n/=2;
            if(z)
                x++;
            else
                y++;
        }
        if(y&&x)
        {
            int l=x+y;
            int q=x;
            int lc,lc2;
            lc2=0;
            lc=l-1;
            for(int j=0; j<l; j++)
            {
                if(d[j]==0&&x)
                    lc=j;
                else if(d[j]==1)
                    lc2=j,x--;
            }
            ll re;
           // cout<<lc<<' '<<lc2<<endl;
            if(lc<lc2)
            {
                re=a[l-lc-1];
                for(int j=0; j<lc; j++)
                {
                    if(d[j]==1)
                        re+=a[l-j-1],q--;
                }
                int j=0;
                q--;
                while(q)
                {
                    re+=a[j++];
                    q--;
                }
            }
            else
            {
                re=a[l];
                int j=0;
                q--;
                while(q)
                {
                    re+=a[j++];
                    q--;
                }
            }
            pf("Case %lld: %lld\n",i,re);
        }
        else
        {
            ll w;
            w=(v%2==0)?v/2:v/2+1;
            pf("Case %lld: %lld\n",i,v+w);
        }
        i++;
    }
    return 0;
}
